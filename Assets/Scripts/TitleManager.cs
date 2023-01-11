using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{
    public static TitleManager Instance { get; private set; }
    public static int level;
    public static int highestLevel;
    [SerializeField] GameObject buttons;
    [SerializeField] GameObject instructions;
    [SerializeField] GameObject credits;
    [SerializeField] GameObject legend;
    bool loadData = true;
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
        Button[] b = buttons.transform.GetComponentsInChildren<Button>();
        //Debug.Log(b.Length);
        for (int i = 0; i < highestLevel - 1; ++i)
        {
            b[i].interactable = true;
        }
    }


    public void EnterLevel(int l)
    {
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
}
