using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class GameManager : MonoBehaviour
{
    [SerializeField] MapManager mapM;
    [SerializeField] GameObject bullet;
    [SerializeField] GameObject victoryCanvas; //maybe make one serializefield, and get by tag/child in it?
    [SerializeField] GameObject lossCanvas;
    [SerializeField] GameObject startCanvas;
    [SerializeField] Image turnsImage;
    [SerializeField] Text turnText;
    public static int turnsRemaining;
    public static int turnsTotal;
    Tile emptyTile = new Tile(tileContents.EMPTY, null, null); //no object for these, so make them once then apply them as needed for brevity

    int autoLastMove = 0;

    // list of positions visited since shooting/moving a block. if you come back to a tile before shooting/moving, prune this branch.
    List<Vector2Int> visited;

    private enum gameStatus //keeps track of what types of inputs do
    {
        START = 0,
        GO,
        LOSS,
        WAITING,
        WIN
    }
    private gameStatus status;
    private void Start()
    {
        Debug.Log("gamemanager Start");
        turnsRemaining = mapM.turns;
        turnsTotal = mapM.turns;
        if (TitleManager.practiceMode == true)
        {
            turnsImage = Resources.Load<Image>("PracticeA");
        }
        turnText.text = "" + turnsRemaining.ToString();
        if(TitleManager.auto == true)
        {
            StartCoroutine(Solver());
        }
        if (TitleManager.menuAuto == true)
        {
            StartCoroutine(MenuAutoStep());
        }
    }

    private IEnumerator MenuAutoStep()
    {
        float temp = Random.Range(0.5f, 1.5f);
        int temp2 = Random.Range(0, 6);
        do
        {
            temp2 = Random.Range(0, 6);
        } while (autoLastMove == 0 && temp2 == 0);
        yield return new WaitForSeconds(temp);
        switch (temp2)
        {
            case 0:Shoot();
                break;
            case 1:MoveLeft();
                break;
            case 2: MoveRight();
                break;
            case 3: MoveUp();
                break;
            case 4: MoveDown();
                break;
        }
        autoLastMove = temp2;
        do
        {
            temp2 = Random.Range(0, 6);
        } while (autoLastMove == 0 && temp2 == 0);
        yield return new WaitForSeconds(1.5f - temp);
        switch (temp2)
        {
            case 0:
                Shoot();
                break;
            case 1:
                MoveLeft();
                break;
            case 2:
                MoveRight();
                break;
            case 3:
                MoveUp();
                break;
            case 4:
                MoveDown();
                break;
        }
        autoLastMove = temp2;
        StartCoroutine(MenuAutoStep());
    }

    private IEnumerator Solver()
    {
        status = gameStatus.GO;
        startCanvas.SetActive(false);
        visited = new List<Vector2Int>();
        visited.Add(mapM.playerLoc);
        //yield return new WaitForSeconds(1f);
        yield return new WaitForSeconds(.00001f);
        for (int i = 0; i < TitleManager.moves.Count; ++i)
        {
            if (TitleManager.moves[i] == TurnChoice.SHOOT)
            {
                visited.Clear();
                Shoot();
            }
            else if (TitleManager.moves[i] == TurnChoice.UP)
            {
                MoveUp();
            }
            else if (TitleManager.moves[i] == TurnChoice.DOWN)
            {
                MoveDown();
            }
            else if (TitleManager.moves[i] == TurnChoice.RIGHT)
            {
                MoveRight();
            }
            else if (TitleManager.moves[i] == TurnChoice.LEFT)
            {
                MoveLeft();
            }
            if (status == gameStatus.WIN)
            {
                TitleManager.autoSuccess = true;
                Debug.Log("win");
                TitleManager.Instance.TitleScreen();
            }
            if (status == gameStatus.LOSS)
            {
                Debug.Log("loss");
                TitleManager.Instance.TitleScreen();
            }
        }
        //Debug.Log("moves done");
        status = gameStatus.WAITING;
        StartCoroutine(bulletEnd());
        yield return new WaitUntil(() => status != gameStatus.WAITING && status != gameStatus.GO);
        if (status == gameStatus.WIN)
        {
            TitleManager.autoSuccess = true;
            Debug.Log("win");
            TitleManager.Instance.TitleScreen();
        }
        else if (status == gameStatus.LOSS)
        {
            //Debug.Log("loss");
            TitleManager.Instance.TitleScreen();
        }
        else
        {
            Debug.Log("too short");
            TitleManager.Instance.TitleScreen();
        }
    }

    void Update()
    {
        //Debug.Log(status);
        if (Input.GetKeyDown(KeyCode.R))
        {
            retry();
        }
        if (status == gameStatus.START)
        {
            bool justTapped = false;
            foreach(Touch t in Input.touches)
            {
                if(t.phase == TouchPhase.Began)
                {
                    justTapped = true;
                }
            }
            if (Input.GetKeyDown(KeyCode.X) || justTapped == true) // keyboard or touch to continue
            {
                justTapped = false;
                status = gameStatus.GO;
                startCanvas.SetActive(false);
            }
        }
        else if (status == gameStatus.GO && TitleManager.auto == false)
        {
            if (Input.GetKeyDown(KeyCode.I))
            {
                ScreenCapture.CaptureScreenshot("screenshot3.png", 1);
            }
            if (Input.GetKeyDown(KeyCode.X) || Input.GetKeyDown(KeyCode.K)) //shoot
            {
                Shoot();
            }
            else if (Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.S)) //move commands
            {
                MoveDown();
            }
            else if (Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W))
            {
                MoveUp();
            }
            else if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D))
            {
                MoveRight();
            }
            else if (Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A))
            {
                MoveLeft();
            }
        }
        else if (status == gameStatus.WIN)
        {
            foreach (Touch t in Input.touches)
            {
                if (t.phase == TouchPhase.Began)
                {
                    nextLevel();
                }
            }
            if (Input.GetKeyDown(KeyCode.X)) {
                nextLevel();
            }
        }
    }

    private void push(List<Tile> tiles, List<Vector2Int> positions) //takes in two lists of the objects in the correct direction, then looks for rules and executes them
    {
        if (tiles.Count > 1 && tiles[1].contents == tileContents.EMPTY)
        {
            mapM.map[positions[1].x, positions[1].y] = mapM.map[positions[0].x, positions[0].y]; //move player over 
            mapM.map[positions[0].x, positions[0].y] = emptyTile; //replace with empty 
            mapM.playerLoc = new Vector2Int(positions[1].x, positions[1].y); //save new player location
            mapM.map[positions[1].x, positions[1].y].block.transform.position = new Vector3(positions[1].x, positions[1].y, 0); //move player visually
            //AUTO CHECK
            if (TitleManager.auto == true && visited.Contains(mapM.playerLoc))
            {
                TitleManager.autoPrune = true;
                TitleManager.Instance.TitleScreen();
            }
            else if(TitleManager.auto == true)
            {
                visited.Add(mapM.playerLoc);
            }
            turn();
        }
        else if (tiles.Count > 2 && (tiles[1].contents == tileContents.BLOCK || tiles[1].contents == tileContents.CRATE) && tiles[2].contents == tileContents.EMPTY)
        {
            //Debug.Log("push" + tiles[1].contents);
            mapM.map[positions[2].x, positions[2].y] = mapM.map[positions[1].x, positions[1].y]; //move block over
            mapM.map[positions[1].x, positions[1].y] = mapM.map[positions[0].x, positions[0].y]; //move player over 
            mapM.map[positions[0].x, positions[0].y] = emptyTile; //replace with empty 
            mapM.playerLoc = new Vector2Int(positions[1].x, positions[1].y); //save new player location 
            mapM.map[positions[1].x, positions[1].y].block.transform.position = new Vector3(positions[1].x, positions[1].y, 0); //move player visually
            mapM.map[positions[2].x, positions[2].y].block.transform.position = new Vector3(positions[2].x, positions[2].y, 0); //move block visually
            mapM.player.GetComponent<AudioSource>().Play();
            if (TitleManager.auto == true)
            {
                visited.Clear();
            }
            turn();
        }
        else if (tiles.Count > 3 && tiles[1].contents == tileContents.CRATE && tiles[2].contents == tileContents.BLOCK && tiles[3].contents == tileContents.EMPTY)
        {
            //Debug.Log("double push");
            mapM.map[positions[3].x, positions[3].y] = mapM.map[positions[2].x, positions[2].y];
            mapM.map[positions[2].x, positions[2].y] = mapM.map[positions[1].x, positions[1].y]; //move block over
            mapM.map[positions[1].x, positions[1].y] = mapM.map[positions[0].x, positions[0].y]; //move player over 
            mapM.map[positions[0].x, positions[0].y] = emptyTile; //replace with empty 
            mapM.playerLoc = new Vector2Int(positions[1].x, positions[1].y); //save new player location 
            mapM.map[positions[1].x, positions[1].y].block.transform.position = new Vector3(positions[1].x, positions[1].y, 0); //move player visually
            mapM.map[positions[2].x, positions[2].y].block.transform.position = new Vector3(positions[2].x, positions[2].y, 0); //move block visually
            mapM.map[positions[3].x, positions[3].y].block.transform.position = new Vector3(positions[3].x, positions[3].y, 0);
            mapM.player.GetComponent<AudioSource>().Play();
            if (TitleManager.auto == true)
            {
                visited.Clear();
            }
            turn();
        }
        else if (tiles.Count > 1 && tiles[1].contents == tileContents.BRIDGE)
        {
            int i = 1;
            while (tiles[i].contents == tileContents.BRIDGE)
            {
                i++;
            }
            if (tiles[i].contents == tileContents.EMPTY)
            {
                mapM.map[positions[i].x, positions[i].y] = mapM.map[positions[0].x, positions[0].y];
                mapM.map[positions[0].x, positions[0].y] = emptyTile; //replace with empty 
                mapM.playerLoc = new Vector2Int(positions[i].x, positions[i].y); //save new player location
                mapM.map[positions[i].x, positions[i].y].block.transform.position = new Vector3(positions[i].x, positions[i].y, 0); //move player visually
                if (TitleManager.auto == true && visited.Contains(mapM.playerLoc))
                {
                    TitleManager.autoPrune = true;
                    TitleManager.Instance.TitleScreen();
                }
                else if (TitleManager.auto == true)
                {
                    visited.Add(mapM.playerLoc);
                }
                turn();
            }
        }
        else if (tiles.Count > 2 && (tiles[1].contents == tileContents.CRATE || tiles[1].contents == tileContents.BLOCK) && tiles[2].contents == tileContents.PIT)
        {
            bool crate = false;
            if (tiles[1].contents == tileContents.CRATE)
            {
                crate = true;
                mapM.map[positions[2].x, positions[2].y].block.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>("PitCrate"); //make the depressed pit image
            }
            else
            {
                mapM.map[positions[2].x, positions[2].y].block.GetComponent<SpriteRenderer>().sprite = Resources.Load<Sprite>("PitBlock"); //make the depressed pit image
            }
            mapM.map[positions[2].x, positions[2].y] = emptyTile; //move block over
            Destroy(mapM.map[positions[1].x, positions[1].y].block);
            mapM.map[positions[1].x, positions[1].y] = mapM.map[positions[0].x, positions[0].y]; //move player over 
            mapM.map[positions[0].x, positions[0].y] = emptyTile; //replace with empty 
            mapM.playerLoc = new Vector2Int(positions[1].x, positions[1].y); //save new player location 
            mapM.map[positions[1].x, positions[1].y].block.transform.position = new Vector3(positions[1].x, positions[1].y, 0); //move player visually
            mapM.player.GetComponent<AudioSource>().Play();
            if (crate)
            {
                breakCrate();
            }
            if (status == gameStatus.WIN || status == gameStatus.LOSS)
            {
                if(TitleManager.practiceMode == false)
                {
                    turnsRemaining--;
                    turnText.text = "Turns Remaining: " + turnsRemaining.ToString();
                }
            }
            else
            {
                if (TitleManager.auto == true)
                {
                    visited.Clear();
                }
                turn();
            }
        }
    }

    private void turn()
    {
        foreach (GameObject b in GameObject.FindGameObjectsWithTag("Bullet"))
        {
            tileContents next = mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].contents;
            if (next == tileContents.EMPTY || next == tileContents.BRIDGE || next == tileContents.PIT)
            {
                mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].bullet = b;
                mapM.map[(int)b.transform.position.x, (int)b.transform.position.y].bullet = null;
                b.transform.position = b.transform.position + Vector3.right;
            }
            else if ((next == tileContents.WALL) || (next == tileContents.BLOCK) || (next == tileContents.PLAYER))
            {
                mapM.map[(int)b.transform.position.x, (int)b.transform.position.y].bullet = null;
                Destroy(b);
            }
            else if (next == tileContents.CRATE)
            {
                Destroy(mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].block);
                mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y] = emptyTile;
                mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].bullet = b;
                b.transform.position = b.transform.position + Vector3.right;
                breakCrate();
            }
        }
        
        turnsRemaining--;
        turnText.text = "" + turnsRemaining.ToString();
        if (turnsRemaining == 0 && TitleManager.practiceMode == false && status != gameStatus.WIN)
        {
            status = gameStatus.WAITING;
            mapM.player.GetComponent<SpriteRenderer>().color = new Color(0, 0, 0, .5f);
            StartCoroutine(bulletEnd());
        }
    }
    private IEnumerator bulletEnd()
    {
        if (GameObject.FindGameObjectsWithTag("Bullet").Length != 0)
        {
            if(TitleManager.auto != true)
            {
                yield return new WaitForSeconds(0.7f);
            }
            yield return new WaitForSeconds(0.00001f);
            foreach (GameObject b in GameObject.FindGameObjectsWithTag("Bullet"))
            {
                tileContents next = mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].contents;
                if (next == tileContents.EMPTY || next == tileContents.BRIDGE || next == tileContents.PIT)
                {
                    mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].bullet = b;
                    mapM.map[(int)b.transform.position.x, (int)b.transform.position.y].bullet = null;
                    b.transform.position = b.transform.position + Vector3.right;
                }
                else if ((next == tileContents.WALL) || (next == tileContents.BLOCK) || (next == tileContents.PLAYER))
                {
                    mapM.map[(int)b.transform.position.x, (int)b.transform.position.y].bullet = null;
                    Destroy(b);
                }
                else if (next == tileContents.CRATE)
                {
                    Destroy(mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].block);
                    mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y] = emptyTile;
                    mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].bullet = b;
                    mapM.map[(int)b.transform.position.x, (int)b.transform.position.y].bullet = null;
                    b.transform.position = b.transform.position + Vector3.right;
                    mapM.crateNum--;
                    if (mapM.crateNum == 0 && TitleManager.practiceMode == false)
                    {
                        status = gameStatus.WIN;
                        victoryCanvas.SetActive(true);
                        if (TitleManager.level+1 > TitleManager.highestLevel)
                        {
                            TitleManager.highestLevel = TitleManager.level+1;
                        }
                        yield break;
                    }
                }
            }
            StartCoroutine(bulletEnd());
        }
        else
        {
            if (mapM.crateNum != 0)
            {
                loss();
            }
        }

    }
    private void breakCrate()
    {
        mapM.crateNum--;
        if (mapM.crateNum == 0 && TitleManager.practiceMode == false)
        {
            status = gameStatus.WIN;
            mapM.player.GetComponent<SpriteRenderer>().color = new Color(0, 0, 0, .5f);
            if (TitleManager.level + 1 > TitleManager.highestLevel)
            {
                TitleManager.highestLevel = TitleManager.level + 1;
            }
            victoryCanvas.SetActive(true);
        }
    }

    public void nextLevel()
    {
        TitleManager.level++;
        System.IO.File.WriteAllText(Application.persistentDataPath + "/SCData.json", TitleManager.highestLevel.ToString());
        TitleManager.Instance.EnterLevel(TitleManager.level);
    }
    public void levelSelect()
    {
        TitleManager.Instance.TitleScreen();
    }
    public void loss()
    {
        lossCanvas.SetActive(true);
        status = gameStatus.LOSS;
        mapM.player.GetComponent<SpriteRenderer>().color = new Color(0, 0, 0, .5f);
    }
    public void retry()
    {
        TitleManager.Instance.EnterLevel(TitleManager.level);
    }

    //mobile button functions
    #region turnOptions
    public void Shoot()
    {
        if (status == gameStatus.LOSS || turnsRemaining == 0)
        {
            return;
        }
        if (mapM.WallHere(TurnChoice.SHOOT))
        {
            return;
        }
        if (TitleManager.auto == true)
        {
            if (GameObject.FindGameObjectsWithTag("Bullet").Length != 0)
            {
                foreach (GameObject b in GameObject.FindGameObjectsWithTag("Bullet"))
                {
                    if (b.transform.position.x == mapM.playerLoc.x)
                    {
                        TitleManager.autoPrune = true;
                        TitleManager.Instance.TitleScreen();
                    }
                }
            }
            if (!mapM.ShootHeuristic())
            {
                TitleManager.autoPrune = true;
                TitleManager.Instance.TitleScreen();
            }
        }
        mapM.map[mapM.playerLoc.x, mapM.playerLoc.y] = new Tile(mapM.map[mapM.playerLoc.x, mapM.playerLoc.y].contents, mapM.map[mapM.playerLoc.x, mapM.playerLoc.y].block, Instantiate(bullet));
        mapM.map[mapM.playerLoc.x, mapM.playerLoc.y].bullet.transform.position = new Vector3Int(mapM.playerLoc.x, mapM.playerLoc.y, 0);
        turn();
    }
    public void MoveDown()
    {
        if(status == gameStatus.LOSS || turnsRemaining == 0)
        {
            return;
        }
        List<Tile> tiles = new List<Tile>();
        List<Vector2Int> locations = new List<Vector2Int>();
        for (int i = 0; true; i++)
        {
            try
            {
                tiles.Add(mapM.map[mapM.playerLoc.x, mapM.playerLoc.y - i]);
                locations.Add(new Vector2Int(mapM.playerLoc.x, mapM.playerLoc.y - i));
            }
            catch { break; }
        }
        push(tiles, locations);
    }
    public void MoveUp()
    {
        if (status == gameStatus.LOSS || turnsRemaining == 0)
        {
            return;
        }
        List<Tile> tiles = new List<Tile>();
        List<Vector2Int> locations = new List<Vector2Int>();
        for (int i = 0; true; i++)
        {
            try
            {
                tiles.Add(mapM.map[mapM.playerLoc.x, mapM.playerLoc.y + i]);
                locations.Add(new Vector2Int(mapM.playerLoc.x, mapM.playerLoc.y + i));
            }
            catch { break; }
        }
        push(tiles, locations);
    }

    public void MoveLeft()
    {
        if (status == gameStatus.LOSS || turnsRemaining == 0)
        {
            return;
        }
        List<Tile> tiles = new List<Tile>();
        List<Vector2Int> locations = new List<Vector2Int>();
        for (int i = 0; true; i++)
        {
            try
            {
                tiles.Add(mapM.map[mapM.playerLoc.x - i, mapM.playerLoc.y]);
                locations.Add(new Vector2Int(mapM.playerLoc.x - i, mapM.playerLoc.y));
            }
            catch { break; }
        }
        push(tiles, locations);
    }

    public void MoveRight()
    {
        if (status == gameStatus.LOSS || turnsRemaining == 0)
        {
            return;
        }
        List<Tile> tiles = new List<Tile>();
        List<Vector2Int> locations = new List<Vector2Int>();
        for (int i = 0; true; i++)
        {
            try
            {
                tiles.Add(mapM.map[mapM.playerLoc.x + i, mapM.playerLoc.y]);
                locations.Add(new Vector2Int(mapM.playerLoc.x + i, mapM.playerLoc.y));
            }
            catch { break; }
        }
        push(tiles, locations);
    }
    #endregion
}
