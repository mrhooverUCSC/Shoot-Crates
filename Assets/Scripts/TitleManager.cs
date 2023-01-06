using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{
    public static TitleManager Instance { get; private set; }
    public static int level;
    public static int highestLevel = 100;
    [SerializeField] GameObject buttons;
    [SerializeField] GameObject instructions;
    [SerializeField] GameObject legend;
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
        Debug.Log(highestLevel);
        Button[] b = buttons.transform.GetComponentsInChildren<Button>();
        Debug.Log(b.Length);
        for(int i = 0; i < highestLevel - 1; ++i)
        {
            b[i].interactable = true;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void EnterLevel(int l)
    {
        level = l;
        SceneManager.LoadScene("Level" + l.ToString());
    }
    public void TitleScreen()
    {
        SceneManager.LoadScene("Title");
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
