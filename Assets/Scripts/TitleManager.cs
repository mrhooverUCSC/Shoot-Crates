using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

using GoogleMobileAds.Api;
using System;
using TMPro;

public class TitleManager : MonoBehaviour
{
    public static TitleManager Instance { get; private set; }
    public static int level;
    public static int highestLevel;
    public static bool practiceMode = false;
    public static bool menuAuto = true;
    [SerializeField] Text practiceModeText;
    [SerializeField] GameObject Canvas;
    [SerializeField] GameObject menuButtons;
    [SerializeField] GameObject menuSplash;
    [SerializeField] GameObject buttons;
    [SerializeField] GameObject instructions;
    [SerializeField] GameObject instructionsA;
    [SerializeField] GameObject instructionsB;
    [SerializeField] GameObject credits;
    [SerializeField] GameObject legend;
    [SerializeField] GameObject levelSelect;

    [SerializeField] GameObject debug1;

    private BannerView bannerAd;
    private string bannerAdIdentifier;
    private AdSize bannerAdSize;

    private string interstitialAdIdentifier;
    private InterstitialAd interAd;



    //auto player stuff
    //Four heuristics currently in place: If there's a bullet in your file, don't shoot; If you waste the turn (move into wall), prune:
    //Don't shoot if you're past all the crates: Don't pass over the same ground until you move something/shoot
    public static bool auto = false; //determines if the level will go into auto mode
    public static bool autoOut = false; //returns true when the auto attempt is over
    public static bool autoSuccess = false; //returns true if the level was solved
    public static bool autoPrune = false; //returns true if the attempt should be pruned (wasted turn, going over your steps)

    private Queue<List<TurnChoice>> movesQueue; //queue of lists
    public static List<TurnChoice> moves; //the current list of moves

    private void Awake()
    {
        if(Instance != null && Instance != this)
        {
            Destroy(this);
        }
        else
        {
            Instance = this;
        }
        //set banner and intsitial ad ids based upon situation
        if (Application.isEditor)
        {
            bannerAdIdentifier = "ca-app-pub-3940256099942544/6300978111";
            interstitialAdIdentifier = "ca-app-pub-3940256099942544/1033173712";
            auto = false;
            if (auto)
            {
                DontDestroyOnLoad(this);
            }
        }
        else
        {
            #if UNITY_IOS
                bannerAdIdentifier = "ca-app-pub-3940256099942544/2934735716";
                interstitialAdIdentifier = "ca-app-pub-3940256099942544/4411468910";

            #elif UNITY_ANDROID
                bannerAdIdentifier = "ca-app-pub-3940256099942544/6300978111";
                interstitialAdIdentifier = "ca-app-pub-3940256099942544/1033173712";
            #endif
        }
        bannerAdSize = AdSize.GetCurrentOrientationAnchoredAdaptiveBannerAdSizeWithWidth(AdSize.FullWidth);
    }
    // Start is called before the first frame update
    void Start()
    {
        if(movesQueue != null) //if in AI, don't do all that setup stuff
        {
            Canvas.SetActive(false);
        }
        else
        {
            MobileAds.Initialize(initStatus => { Debug.Log("Ads Initialized"); });
            //load level data
            if (!System.IO.File.Exists(Application.persistentDataPath + "/SCData.json")) //if no data file, make one
            {
                Debug.Log("creating file");
                // Create a file to write to.
                System.IO.File.WriteAllText(Application.persistentDataPath + "/SCData.json", "1");
            }
            else //else load the data into highestLevel
            {
                string temp = System.IO.File.ReadAllText(Application.persistentDataPath + "/SCData.json");
                highestLevel = int.Parse(temp);
                Debug.Log("loading file, saved number is " + highestLevel);
            }
            //PreLoadInterstitial();
            //Debug.Log("TitleScreen() calling ShowIntersitial()");
            //ShowIntersitial();
            requestBanner();
            Button[] b = buttons.transform.GetComponentsInChildren<Button>();
            //Debug.Log(b.Length);
            for (int i = 0; i < highestLevel - 1; ++i)
            {
                b[i].interactable = true;
            }

            //Load background
            menuAuto = true;
            SceneManager.LoadScene("MenuAuto", LoadSceneMode.Additive);

            if (practiceMode == true)
            {
                practiceModeText.text = "Practice Mode Enabled";
                practiceModeText.color = Color.green;
            }
            else
            {
                practiceModeText.text = "Practice Mode Disabled";
                practiceModeText.color = Color.red;
            }
        }
    }

    public void Update()
    {
        foreach (Touch t in Input.touches)
        {
            if (t.phase == TouchPhase.Began && menuButtons.GetComponent<Animator>().GetBool("Appear") == false)
            {
                menuButtons.SetActive(true);
                menuButtons.GetComponent<Animator>().SetBool("Appear", true);
            }
        }
        if (Input.GetKeyDown(KeyCode.X) && menuButtons.GetComponent<Animator>().GetBool("Appear") == false) // keyboard or touch to continue
        {
            menuButtons.SetActive(true);
            menuButtons.GetComponent<Animator>().SetBool("Appear", true);
        }
        if (Input.GetKeyDown(KeyCode.I))
        {
            ScreenCapture.CaptureScreenshot(".9titlescreen.png", 1);
        }
    }

    public IEnumerator AutoStep()
    {
        if(movesQueue.Count == 0)
        {
            Debug.Log("queue empty");
            yield break;
        }
        else
        {
            List<TurnChoice> pop = movesQueue.Dequeue();
            yield return StartCoroutine(AutoHelper(TurnChoice.SHOOT, pop));
            yield return StartCoroutine(AutoHelper(TurnChoice.UP, pop));
            yield return StartCoroutine(AutoHelper(TurnChoice.DOWN, pop));
            yield return StartCoroutine(AutoHelper(TurnChoice.RIGHT, pop));
            yield return StartCoroutine(AutoHelper(TurnChoice.LEFT, pop));
        }

        StartCoroutine(AutoStep());
    }

    private IEnumerator AutoHelper(TurnChoice move, List<TurnChoice> pop)
    {
        List<TurnChoice> temp = new List<TurnChoice>();
        CopyList(temp, pop);
        if(move == TurnChoice.SHOOT && pop.Count > 0 && pop[^1] == TurnChoice.SHOOT)
        {
            yield break;
        }
        temp.Add(move);
        moves = temp;
        autoOut = false;
        SceneManager.LoadScene("Level" + level.ToString(), LoadSceneMode.Additive);//try
        //Debug.Log(string.Join("", temp));
        yield return new WaitUntil(() => autoOut == true);
        //if good, quit
        if (autoSuccess)
        {
            string s = "";
            foreach(TurnChoice t in temp)
            {
                s = s + "" + t + " ";
            }
            Debug.Log(s);
            Canvas.SetActive(true);
            StopAllCoroutines();
            yield break;
        }
        //if the turns don't add up, a turn was wasted, so toss it
        if(temp.Count != GameManager.turnsTotal - GameManager.turnsRemaining)
        {
            Debug.Log("wasted turn, prune branch");
            yield break;
        }
        if (autoPrune)
        {
            autoPrune = false;
            Debug.Log("already visited, prune branch");
            yield break;
        }
        //if bad, enqueue, continue

        movesQueue.Enqueue(temp);
    }

    private void CopyList(List<TurnChoice> o, List<TurnChoice> i)
    {
        foreach(TurnChoice t in i)
        {
            o.Add(t);
        }
    }

    #region menu functions
    public void EnterLevel(int l)
    {
        if(bannerAd != null)
        {
            bannerAd.Destroy();
        }
        Debug.Log("entering level " + l + ", highest level is " + highestLevel);
        level = l;
        menuAuto = false;
        if (auto)
        {
            movesQueue = new Queue<List<TurnChoice>>();
            List<TurnChoice> temp = new List<TurnChoice>();
            movesQueue.Enqueue(temp);

            Canvas.SetActive(false);
            Debug.Log("start auto");
            StartCoroutine(AutoStep());
        }
        else
        {
            SceneManager.LoadScene("Level" + l.ToString());
        }
    }
    public void TitleScreen()
    {
        if (auto)
        {
            SceneManager.LoadScene("Title");
            autoOut = true;
        }
        else
        {
            SceneManager.LoadScene("Title");
        }
        System.IO.File.WriteAllText(Application.persistentDataPath + "/SCData.json", highestLevel.ToString());
    }
    public void Quit()
    {
        Application.Quit();
    }

    //turn off the menu buttons for a quick second when the menu is moving around
    public IEnumerator DisableMenuButtons()
    {
        foreach(GameObject b in GameObject.FindGameObjectsWithTag("MenuButton"))
        {
            b.GetComponent<Button>().interactable = false;
        }
        yield return new WaitForSeconds(.25f);
        foreach (GameObject b in GameObject.FindGameObjectsWithTag("MenuButton"))
        {
            b.GetComponent<Button>().interactable = true;
        }
    }

    public void toggleInstructions()
    {
        StartCoroutine(DisableMenuButtons());
        if(instructions.GetComponent<Animator>().GetBool("isOnScreen") == false)
        {
            instructions.GetComponent<Animator>().SetBool("isOnScreen", true);
            instructionsA.SetActive(true);
            instructionsB.SetActive(false);
        }
        else
        {
            instructions.GetComponent<Animator>().SetBool("isOnScreen", false);
        }
    }
    public void nextInstructions()
    {
        instructionsA.SetActive(false);
        instructionsB.SetActive(true); 
    }
    public void toggleCredits()
    {
        StartCoroutine(DisableMenuButtons());
        if (credits.GetComponent<Animator>().GetBool("isOnScreen") == false)
        {
            credits.GetComponent<Animator>().SetBool("isOnScreen", true);
        }
        else
        {
            credits.GetComponent<Animator>().SetBool("isOnScreen", false);
        }
    }
    public void toggleLegend()
    {
        StartCoroutine(DisableMenuButtons());
        if (legend.GetComponent<Animator>().GetBool("isOnScreen") == false)
        {
            legend.GetComponent<Animator>().SetBool("isOnScreen", true);
        }
        else
        {
            legend.GetComponent<Animator>().SetBool("isOnScreen", false);
        }

    }
    public void toggleLevelSelect()
    {
        StartCoroutine(DisableMenuButtons());
        if (levelSelect.GetComponent<Animator>().GetBool("isOnScreen") == false)
        {
            levelSelect.GetComponent<Animator>().SetBool("isOnScreen", true);
        }
        else
        {
            levelSelect.GetComponent<Animator>().SetBool("isOnScreen", false);
        }

    }

    public void OpenFeedback()
    {
        Application.OpenURL("https://forms.gle/uzeWqw9PntcuHHFd7");
    }

    public void togglePracticeMode()
    {
        if(practiceMode == false)
        {
            practiceMode = true;
            practiceModeText.text = "Practice Mode Enabled";
            practiceModeText.color = new Color(.26f, .66f, .21f);
        }
        else
        {
            practiceMode = false;
            practiceModeText.text = "Practice Mode Disabled";
            practiceModeText.color = Color.red;
        }
    }
    #endregion

    #region ads
    public void requestBanner()
    {
        if (bannerAd != null) //break the current ad if it exists
        {
            bannerAd.Destroy();
            bannerAd = null;
        }
        Debug.Log(bannerAdIdentifier + " | " + bannerAdSize);
        bannerAd = new BannerView(bannerAdIdentifier, bannerAdSize, AdPosition.Bottom);
        // Register the events
        AdRequest request = new AdRequest.Builder().Build();
        bannerAd.OnBannerAdLoaded += this.HandleOnBannerAdLoaded;
        bannerAd.OnBannerAdLoadFailed += this.HandleOnBannerAdFailedToLoad;
        bannerAd.OnAdClicked += this.HandleOnBannerAdOpened;
        //this.bannerAd.on += this.HandleAdClosed; //i don't think banner ads can be closed

        // Load the banner with the request.
        bannerAd.LoadAd(request);
    }

    #region BannerAdAddOnFunctions
    public void HandleOnBannerAdLoaded()
    {
        MonoBehaviour.print("----HandleAdLoaded BannerAd event received----");
    }

    public void HandleOnBannerAdFailedToLoad(LoadAdError error)
    {
        MonoBehaviour.print("----HandleFailedToReceiveAd BannerAd event received with message: "
                            + error.GetMessage() + "----");
    }

    public void HandleOnBannerAdOpened()
    {
        MonoBehaviour.print("----HandleAdOpened BannerAd event received----");
    }
    #endregion

    private void PreLoadInterstitial() //loads a new interstitial ad into interAd
    {
        if (interAd != null)
        {
            interAd.Destroy();
            interAd = null;
        }
        Debug.Log("Preload Intersitial Ad : " + interstitialAdIdentifier);

        AdRequest request = new AdRequest();
        request.Keywords.Add("unity-admob-interstitial");

        InterstitialAd.Load(interstitialAdIdentifier, request,
                      (InterstitialAd ad, LoadAdError error) =>
                      {
                          // if error is not null, the load request failed.
                          if (error != null || ad == null)
                          {
                              Debug.LogError("interstitial ad failed to load an ad " +
                                             "with error : " + error);
                              return;
                          }

                          Debug.Log("Interstitial ad loaded with response : "
                                    + ad.GetResponseInfo().ToString());

                          interAd = ad;
                      });

        // Raised when an impression is recorded for an ad.
        interAd.OnAdImpressionRecorded += () =>
        {
            Debug.Log("Interstitial ad recorded an impression.");
        };
        // Raised when a click is recorded for an ad.
        interAd.OnAdClicked += () =>
        {
            Debug.Log("Interstitial ad was clicked.");
        };
        // Raised when an ad opened full screen content.
        interAd.OnAdFullScreenContentOpened += () =>
        {
            Debug.Log("Interstitial ad full screen content opened.");
        };
        interAd.OnAdFullScreenContentClosed += () =>
        {
            Debug.Log("Interstitial Ad full screen content closed.");

            // Reload the ad so that we can show another as soon as possible.
            PreLoadInterstitial();
        };
        // Raised when the ad failed to open full screen content.
        interAd.OnAdFullScreenContentFailed += (AdError error) =>
        {
            Debug.LogError("Interstitial ad failed to open full screen content " +
                           "with error : " + error);

            // Reload the ad so that we can show another as soon as possible.
            PreLoadInterstitial();
        };

    }

    private void ShowIntersitial()
    {
        if (interAd != null && interAd.CanShowAd())
        {
            Debug.Log("Showing interstitial ad.");
            interAd.Show();
        }
        else
        {
            Debug.LogError("Interstitial ad is equal to null or not ready.");
        }
    }
#endregion
}

internal class TextMeshProUI
{
}

public enum TurnChoice{
    SHOOT,
    UP,
    DOWN,
    RIGHT,
    LEFT
}