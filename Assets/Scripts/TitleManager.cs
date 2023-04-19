using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

using GoogleMobileAds.Api;
using System;

public class TitleManager : MonoBehaviour
{
    public static TitleManager Instance { get; private set; }
    public static int level;
    public static int highestLevel;
    [SerializeField] GameObject buttons;
    [SerializeField] GameObject instructions;
    [SerializeField] GameObject credits;
    [SerializeField] GameObject legend;
    [SerializeField] GameObject levelSelect;

    [SerializeField] GameObject debug1;
    bool loadData = true;

    private BannerView bannerView;
    private InterstitialAd interstitial;
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
    }
    // Start is called before the first frame update
    void Start()
    {
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
    }


    #region menu functions
    public void EnterLevel(int l)
    {
        if(bannerView != null)
        {
            bannerView.Destroy();
        }
        if(interstitial != null)
        {
            interstitial.Destroy();
        }
        Debug.Log("entering level " + l + ", highest level is " + highestLevel);
        level = l;
        SceneManager.LoadScene("Level" + l.ToString());
    }
    public void TitleScreen()
    {
        SceneManager.LoadScene("Title");
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
    #endregion

    #region ads
    public void requestBanner()
    {
        if (bannerView != null)
        {
            bannerView.Destroy();
        }
        //my id: "ca-app-pub-3422267264140540/5279916682"
        //test banner ad id: "ca-app-pub-3940256099942544/6300978111"
        AdSize size = AdSize.GetCurrentOrientationAnchoredAdaptiveBannerAdSizeWithWidth(AdSize.FullWidth);
        bannerView = new BannerView("ca-app-pub-3422267264140540/5279916682", size, AdPosition.Bottom);
        // Create an empty ad request.
        // Register the events
        AdRequest request = new AdRequest.Builder().Build();
        this.bannerView.OnBannerAdLoaded += this.HandleOnAdLoaded;
        this.bannerView.OnBannerAdLoadFailed += this.HandleOnAdFailedToLoad;
        this.bannerView.OnAdClicked += this.HandleOnAdOpened;
        //this.bannerView.on += this.HandleAdClosed; //i don't think banner ads can be closed

        // Load the banner with the request.
        bannerView.LoadAd(request);
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

    public void RequestInterstitial()
    {
        interstitial.Destroy();
        interstitial = new InterstitialAd("ca - app - pub - 3940256099942544 / 1033173712");
    }
    #endregion
}
