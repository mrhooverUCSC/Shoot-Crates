using System.Collections;
using System.Collections.Generic;
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
    [SerializeField] Text turnText;
    private int turnsRemaining;
    Tile emptyTile = new Tile(tileContents.EMPTY, null, null); //no object for these, so make them once then apply them as needed for brevity
    Tile wallTile = new Tile(tileContents.WALL, null, null);
    private enum gameStatus //keeps track of what types of inputs do
    {
        START = 0,
        GO,
        LOSS,
        WIN
    }
    private gameStatus status;
    private void Start() 
    {
        turnsRemaining = mapM.turns;
        turnText.text = "Turns Remaining: " + turnsRemaining.ToString();

        if(TitleManager.level > TitleManager.highestLevel) //makes sure the level is unlocked on title
        {
            TitleManager.highestLevel = TitleManager.level;
        }
    }
    void Update()
    {
        Debug.Log(status);
        if (Input.GetKeyDown(KeyCode.R))
        {
            retry();
        }
        if(status == gameStatus.START)
        {
            if (Input.GetKeyDown(KeyCode.X))
            {
                status = gameStatus.GO;
                startCanvas.SetActive(false);
            }
        }
        else if (status == gameStatus.GO)
        {
            if (Input.GetKeyDown(KeyCode.X) || Input.GetKeyDown(KeyCode.K)) //shoot
            {
                mapM.map[mapM.playerLoc.x, mapM.playerLoc.y] = new Tile(mapM.map[mapM.playerLoc.x, mapM.playerLoc.y].contents, mapM.map[mapM.playerLoc.x, mapM.playerLoc.y].block, Instantiate(bullet));
                mapM.map[mapM.playerLoc.x, mapM.playerLoc.y].bullet.transform.position = new Vector3Int(mapM.playerLoc.x, mapM.playerLoc.y, 0);
                turn();
            }
            else if (Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.S)) //move commands
            {
                List<Tile> tiles = new List<Tile>();
                List<Vector2Int> locations = new List<Vector2Int>();
                for(int i = 0; true; i++)
                {
                    try{ 
                        tiles.Add(mapM.map[mapM.playerLoc.x, mapM.playerLoc.y - i]);
                        locations.Add(new Vector2Int(mapM.playerLoc.x, mapM.playerLoc.y - i));
                    }
                    catch { break; }
                }
                push(tiles, locations);
            }
            else if (Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W))
            {
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
            else if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D))
            {
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
            else if (Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A))
            {
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
        }
        else if(status == gameStatus.WIN)
        {
            if (Input.GetKeyDown(KeyCode.X)){
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
            turn();
        }
        else if (tiles.Count > 2 && (tiles[1].contents == tileContents.BLOCK || tiles[1].contents == tileContents.CRATE) && tiles[2].contents == tileContents.EMPTY)
        {
            Debug.Log("push" + tiles[1].contents);
            mapM.map[positions[2].x, positions[2].y] = mapM.map[positions[1].x, positions[1].y]; //move block over
            mapM.map[positions[1].x, positions[1].y] = mapM.map[positions[0].x, positions[0].y]; //move player over 
            mapM.map[positions[0].x, positions[0].y] = emptyTile; //replace with empty 
            mapM.playerLoc = new Vector2Int(positions[1].x, positions[1].y); //save new player location 
            mapM.map[positions[1].x, positions[1].y].block.transform.position = new Vector3(positions[1].x, positions[1].y, 0); //move player visually
            mapM.map[positions[2].x, positions[2].y].block.transform.position = new Vector3(positions[2].x, positions[2].y, 0); //move block visually
            mapM.player.GetComponent<AudioSource>().Play();
            turn();
        }
        else if(tiles.Count > 3 && tiles[1].contents == tileContents.CRATE && tiles[2].contents == tileContents.BLOCK && tiles[3].contents == tileContents.EMPTY)
        {
            Debug.Log("double push");
            mapM.map[positions[3].x, positions[3].y] = mapM.map[positions[2].x, positions[2].y];
            mapM.map[positions[2].x, positions[2].y] = mapM.map[positions[1].x, positions[1].y]; //move block over
            mapM.map[positions[1].x, positions[1].y] = mapM.map[positions[0].x, positions[0].y]; //move player over 
            mapM.map[positions[0].x, positions[0].y] = emptyTile; //replace with empty 
            mapM.playerLoc = new Vector2Int(positions[1].x, positions[1].y); //save new player location 
            mapM.map[positions[1].x, positions[1].y].block.transform.position = new Vector3(positions[1].x, positions[1].y, 0); //move player visually
            mapM.map[positions[2].x, positions[2].y].block.transform.position = new Vector3(positions[2].x, positions[2].y, 0); //move block visually
            mapM.map[positions[3].x, positions[3].y].block.transform.position = new Vector3(positions[3].x, positions[3].y, 0);
            mapM.player.GetComponent<AudioSource>().Play();
            turn();
        }
        else if(tiles.Count > 1 && tiles[1].contents == tileContents.BRIDGE)
        {
            int i = 1;
            while(tiles[i].contents == tileContents.BRIDGE)
            {
                i++;
            }
            if(tiles[i].contents == tileContents.EMPTY)
            {
                mapM.map[positions[i].x, positions[i].y] = mapM.map[positions[0].x, positions[0].y];
                mapM.map[positions[0].x, positions[0].y] = emptyTile; //replace with empty 
                mapM.playerLoc = new Vector2Int(positions[i].x, positions[i].y); //save new player location
                mapM.map[positions[i].x, positions[i].y].block.transform.position = new Vector3(positions[i].x, positions[i].y, 0); //move player visually
                turn();
            }
        }
        else if(tiles.Count > 2 && (tiles[1].contents == tileContents.CRATE || tiles[1].contents == tileContents.BLOCK) && tiles[2].contents == tileContents.PIT)
        {
            bool crate = false;
            if(tiles[1].contents == tileContents.CRATE)
            {
                crate = true;
            }
            Destroy(mapM.map[positions[2].x, positions[2].y].block);
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
            if(status == gameStatus.WIN || status == gameStatus.LOSS)
            {
                turnsRemaining--;
                turnText.text = "Turns Remaining: " + turnsRemaining.ToString();
            }
            else
            {
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
            else if ((next == tileContents.WALL) || (next == tileContents.BLOCK))
            {
                mapM.map[(int)b.transform.position.x, (int)b.transform.position.y].bullet = null;
                Destroy(b);
            }
            else if(next == tileContents.CRATE)
            {
                Destroy(mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].block);
                mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y] = emptyTile;
                mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].bullet = b;
                b.transform.position = b.transform.position + Vector3.right;
                breakCrate();
            }
        }
        turnsRemaining--;
        turnText.text = "Turns Remaining: " + turnsRemaining.ToString();
        if(turnsRemaining == 0 && status != gameStatus.WIN)
        {
            status = gameStatus.LOSS;
            mapM.player.GetComponent<SpriteRenderer>().color = new Color(0, 0, 0, .5f);
            StartCoroutine(bulletEnd());
        }
    }
    private IEnumerator bulletEnd()
    {
        if (GameObject.FindGameObjectsWithTag("Bullet").Length != 0)
        {
            yield return new WaitForSeconds(0.7f);
            foreach (GameObject b in GameObject.FindGameObjectsWithTag("Bullet"))
            {
                tileContents next = mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].contents;
                if (next == tileContents.EMPTY || next == tileContents.BRIDGE || next == tileContents.PIT)
                {
                    mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].bullet = b;
                    mapM.map[(int)b.transform.position.x, (int)b.transform.position.y].bullet = null;
                    b.transform.position = b.transform.position + Vector3.right;
                }
                else if ((next == tileContents.WALL) || (next == tileContents.BLOCK))
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
                    if (mapM.crateNum == 0)
                    {
                        status = gameStatus.WIN;
                        victoryCanvas.SetActive(true);
                        TitleManager.highestLevel++;
                        yield break;
                    }
                }
            }
            StartCoroutine(bulletEnd());
        }
        else
        {
            if(mapM.crateNum != 0)
            {
                lossCanvas.SetActive(true);
            }
        }

    }
    private void breakCrate()
    {
        mapM.crateNum--;
        if (mapM.crateNum == 0)
        {
            status = gameStatus.WIN;
            mapM.player.GetComponent<SpriteRenderer>().color = new Color(0, 0, 0, .5f);
            TitleManager.highestLevel++;
            victoryCanvas.SetActive(true);
        }
    }
    public void nextLevel()
    {
        TitleManager.level++;
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
}
