using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public static class DataManager
{
    //Save data is a .json file with two lines: a 1-15 for normal level reached on the first line, and a 1-5 for tutorial level reached on the second line.
    public static SaveData LoadData()
    {
        SaveData data = new SaveData();
        if (!System.IO.File.Exists(Application.persistentDataPath + "/SCData.json")) //if no data file, make one
        {
            Debug.Log("creating file");
            // Create a file to write to.
            System.IO.File.WriteAllText(Application.persistentDataPath + "/SCData.json", "1\n1");
        }
        else //else load the data into highestLevel
        {
            Debug.Log("loading file");
            Debug.Log(System.IO.File.ReadAllText(Application.persistentDataPath + "/SCData.json"));
            StreamReader sr = new StreamReader(Application.persistentDataPath + "/SCData.json");
            data.levelReached = int.Parse(sr.ReadLine());
            if(data.levelReached > 14)
            {
                data.levelReached = 14;
            }
            try
            {
                data.tutorialLevelReached = int.Parse(sr.ReadLine());
                if (data.tutorialLevelReached > 5)
                    data.tutorialLevelReached = 5;
            }
            catch
            {
                data.tutorialLevelReached = 1;
                sr.Close();
                SaveData(data);
            }
            sr.Close();
        }
        return data;
    }

    public static void SaveData(SaveData sd)
    {
        System.IO.File.WriteAllText(Application.persistentDataPath + "/SCData.json", sd.levelReached + "\n" + sd.tutorialLevelReached);
    }
}

public struct SaveData
{
    public int tutorialLevelReached;
    public int levelReached;
} 