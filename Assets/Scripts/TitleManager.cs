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
    [SerializeField] Text practiceModeText;
    [SerializeField] GameObject Canvas;
    [SerializeField] GameObject buttons;
    [SerializeField] GameObject instructions;
    [SerializeField] GameObject credits;
    [SerializeField] GameObject legend;
    [SerializeField] GameObject levelSelect;

    [SerializeField] GameObject debug1;
    bool loadData = true;

    private BannerView bannerView;
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
        //set bannerAdIdentifier based upon situation
        if (Application.isEditor)
        {
            bannerAdIdentifier = "ca-app-pub-3940256099942544/6300978111";
            interstitialAdIdentifier = "ca-app-pub-3940256099942544/4411468910";
            //auto = true;
            if (auto)
            {
                DontDestroyOnLoad(this);
            }
        }
        else
        {
            #if UNITY_IOS
                bannerAdIdentifier = "ca-app-pub-3422267264140540/7214962530";
                interstitialAdIdentifier = "ca-app-pub-3940256099942544/4411468910";

            #elif UNITY_ANDROID
                bannerAdIdentifier = "ca-app-pub-3422267264140540/5279916682";
                interstitialAdIdentifier = "ca-app-pub-3940256099942544/4411468910";
            #endif
        }
        bannerAdSize = AdSize.GetCurrentOrientationAnchoredAdaptiveBannerAdSizeWithWidth(AdSize.FullWidth);
    }
    // Start is called before the first frame update
    void Start()
    {
        if(movesQueue != null)
        {
            Canvas.SetActive(false);
        }
        if (loadData)
        {
            if(SystemInfo.deviceType == DeviceType.Handheld)
            {
                MobileAds.Initialize(initStatus => { });
            }
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
            loadData = false;
        }
        requestBanner();
        //RequestInterstitial();
        Button[] b = buttons.transform.GetComponentsInChildren<Button>();
        //Debug.Log(b.Length);
        for (int i = 0; i < highestLevel - 1; ++i)
        {
            b[i].interactable = true;
        }

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

        //ScreenCapture.CaptureScreenshot("titlescreenscreenshot.png", 1);
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
        Debug.Log(string.Join("", temp));
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
        if(bannerView != null)
        {
            bannerView.Destroy();
        }
        if(interAd != null)
        {
            interAd.Destroy();
        }
        Debug.Log("entering level " + l + ", highest level is " + highestLevel);
        level = l;
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
        SceneManager.LoadScene("Title");
        if (auto)
        {
            autoOut = true;
        }
        else
        {
            RequestIntersitial();
        }
        System.IO.File.WriteAllText(Application.persistentDataPath + "/SCData.json", highestLevel.ToString());
    }
    public void Quit()
    {
        Application.Quit();
    }
    public void toggleInstructions()
    {
        if(instructions.activeSelf == false)
        {
            instructions.SetActive(true);
        }
        else
        {
            instructions.SetActive(false);
        }
    }
    public void toggleCredits()
    {
        if (credits.activeSelf == false)
        {
            credits.SetActive(true);
        }
        else
        {
            credits.SetActive(false);
        }
    }
    public void toggleLegend()
    {
        if (legend.activeSelf == false)
        {
            legend.SetActive(true);
        }
        else
        {
            legend.SetActive(false);
        }

    }
    public void toggleLevelSelect()
    {
        if (levelSelect.activeSelf == false)
        {
            levelSelect.SetActive(true);
        }
        else
        {
            levelSelect.SetActive(false);
        }

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
        if (bannerView != null) //break the current ad if it exists
        {
            bannerView.Destroy();
        }
        Debug.Log(bannerAdIdentifier + " | " + bannerAdSize);
        bannerView = new BannerView(bannerAdIdentifier, bannerAdSize, AdPosition.Bottom);
        // Register the events
        AdRequest request = new AdRequest.Builder().Build();
        this.bannerView.OnBannerAdLoaded += this.HandleOnAdLoaded;
        this.bannerView.OnBannerAdLoadFailed += this.HandleOnAdFailedToLoad;
        this.bannerView.OnAdClicked += this.HandleOnAdOpened;
        //this.bannerView.on += this.HandleAdClosed; //i don't think banner ads can be closed

        // Load the banner with the request.
        bannerView.LoadAd(request);
    }

    private void RequestIntersitial()
    {
        if(interAd != null)
        {
            interAd.Destroy();
        }
        Debug.Log("Intersitial Ad : " + bannerAdIdentifier);

        AdRequest request = new AdRequest();
        request.Keywords.Add("unity-admob-sample");

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
                                    + ad.GetResponseInfo());

                          interAd = ad;
                      });
    }

    public void HandleOnAdLoaded()
    {
        MonoBehaviour.print("----HandleAdLoaded event received----");
    }

    public void HandleOnAdFailedToLoad(LoadAdError error)
    {
        MonoBehaviour.print("----HandleFailedToReceiveAd event received with message: "
                            + error.GetMessage() + "----");
    }

    public void HandleOnAdOpened()
    {
        MonoBehaviour.print("----HandleAdOpened event received----");
    }
#endregion
}

public enum TurnChoice{
    SHOOT,
    UP,
    DOWN,
    RIGHT,
    LEFT
}