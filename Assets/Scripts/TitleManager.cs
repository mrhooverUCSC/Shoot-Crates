using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{
    public static TitleManager Instance { get; private set; }
    public static int level;
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
}
