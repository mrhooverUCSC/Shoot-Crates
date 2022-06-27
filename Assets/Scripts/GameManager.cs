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
    [SerializeField] Text turnText;
    private int turnsRemaining;
    Tile emptyTile = new Tile(tileContents.EMPTY, null, null); //no object for these, so make them once then apply them as needed for brevity
    Tile wallTile = new Tile(tileContents.WALL, null, null);
    private enum gameStatus
    {
        GO = 0,
        STOP
    }
    private gameStatus status;
    private void Start()
    {
        turnsRemaining = mapM.turns;
        turnText.text = "Turns Remaining: " + turnsRemaining.ToString();
    }
    void Update()
    {
        if(status == gameStatus.GO)
        {
            if (Input.GetKeyDown(KeyCode.X))
            {
                if (mapM.map[mapM.playerLoc.x + 1, mapM.playerLoc.y].contents == tileContents.EMPTY)
                {
                    turn();
                    mapM.map[mapM.playerLoc.x + 1, mapM.playerLoc.y] = new Tile(tileContents.EMPTY, null, Instantiate(bullet));
                    mapM.map[mapM.playerLoc.x + 1, mapM.playerLoc.y].bullet.transform.position = new Vector3Int(mapM.playerLoc.x + 1, mapM.playerLoc.y, 0);
                }
            }
            else if (Input.GetKeyDown(KeyCode.R))
            {
                retry();
            }
            else if (Input.GetKeyDown(KeyCode.DownArrow))
            {
                Tile target = mapM.map[mapM.playerLoc.x, mapM.playerLoc.y - 1];
                //Debug.Log("Target: " + target.contents);
                //Debug.Log(mapM.playerLoc.x + ", " + (mapM.playerLoc.y - 1));
                Tile targetOver;
                try { targetOver = mapM.map[mapM.playerLoc.x, mapM.playerLoc.y - 2]; }
                catch { targetOver = wallTile; }
                //Debug.Log("TargetOver: " + target.contents);
                //Debug.Log(mapM.playerLoc.x + ", " + (mapM.playerLoc.y - 1));

                Vector2Int pos = mapM.playerLoc;
                //Debug.Log(pos + " " + target.contents);
                if (target.contents == tileContents.EMPTY)
                {
                    turn();
                    mapM.map[pos.x, pos.y - 1] = mapM.map[pos.x, pos.y]; //move player over 
                    mapM.map[pos.x, pos.y] = emptyTile; //replace with empty 
                    mapM.playerLoc = new Vector2Int(pos.x, pos.y - 1); //save new player location
                    mapM.map[pos.x, pos.y - 1].block.transform.position = mapM.map[pos.x, pos.y - 1].block.transform.position + Vector3.down; //move player visually
                }
                else if ((target.contents == tileContents.BLOCK || target.contents == tileContents.CRATE) && targetOver.contents == tileContents.EMPTY)
                {
                    turn();
                    mapM.map[pos.x, pos.y - 2] = mapM.map[pos.x, pos.y - 1]; //move block over
                    mapM.map[pos.x, pos.y - 1] = mapM.map[pos.x, pos.y]; //move player over 
                    mapM.map[pos.x, pos.y] = emptyTile; //replace with empty 
                    mapM.playerLoc = new Vector2Int(pos.x, pos.y - 1); //save new player location 
                    mapM.map[pos.x, pos.y - 1].block.transform.position = mapM.map[pos.x, pos.y - 1].block.transform.position + Vector3.down; //move player visually
                    mapM.map[pos.x, pos.y - 2].block.transform.position = mapM.map[pos.x, pos.y - 2].block.transform.position + Vector3.down; //move block visually
                }
            }
            else if (Input.GetKeyDown(KeyCode.UpArrow))
            {
                Tile target = mapM.map[mapM.playerLoc.x, mapM.playerLoc.y + 1];
                //Debug.Log("Target: " + target.contents);
                //Debug.Log(mapM.playerLoc.x + ", " + (mapM.playerLoc.y + 1));
                Tile targetOver;
                try { targetOver = mapM.map[mapM.playerLoc.x, mapM.playerLoc.y + 2]; }
                catch { targetOver = wallTile; }
                //Debug.Log("TargetOver: " + target.contents);
                //Debug.Log(mapM.playerLoc.x + ", " + (mapM.playerLoc.y + 1));

                Vector2Int pos = mapM.playerLoc;
                //Debug.Log(pos + " " + target.contents);
                if (target.contents == tileContents.EMPTY)
                {
                    turn();
                    mapM.map[pos.x, pos.y + 1] = mapM.map[pos.x, pos.y]; //move player over 
                    mapM.map[pos.x, pos.y] = emptyTile; //replace with empty 
                    mapM.playerLoc = new Vector2Int(pos.x, pos.y + 1); //save new player location
                    mapM.map[pos.x, pos.y + 1].block.transform.position = mapM.map[pos.x, pos.y + 1].block.transform.position + Vector3.up; //move player visually
                }
                else if ((target.contents == tileContents.BLOCK || target.contents == tileContents.CRATE) && targetOver.contents == tileContents.EMPTY)
                {
                    turn();
                    mapM.map[pos.x, pos.y + 2] = mapM.map[pos.x, pos.y + 1]; //move block over
                    mapM.map[pos.x, pos.y + 1] = mapM.map[pos.x, pos.y]; //move player over 
                    mapM.map[pos.x, pos.y] = emptyTile; //replace with empty 
                    mapM.playerLoc = new Vector2Int(pos.x, pos.y + 1); //save new player location 
                    mapM.map[pos.x, pos.y + 1].block.transform.position = mapM.map[pos.x, pos.y + 1].block.transform.position + Vector3.up; //move player visually
                    mapM.map[pos.x, pos.y + 2].block.transform.position = mapM.map[pos.x, pos.y + 2].block.transform.position + Vector3.up; //move block visually
                }
            }
            else if (Input.GetKeyDown(KeyCode.RightArrow))
            {
                Tile target = mapM.map[mapM.playerLoc.x + 1, mapM.playerLoc.y];
                //Debug.Log("Target: " + target.contents);
                //Debug.Log((mapM.playerLoc.x+1) + ", " + (mapM.playerLoc.y));
                Tile targetOver;
                try { targetOver = mapM.map[mapM.playerLoc.x + 2, mapM.playerLoc.y]; }
                catch { targetOver = wallTile; }
                //Debug.Log("TargetOver: " + target.contents);
                //Debug.Log((mapM.playerLoc.x+1) + ", " + (mapM.playerLoc.y));

                Vector2Int pos = mapM.playerLoc;
                //Debug.Log(pos + " " + target.contents);
                if (target.contents == tileContents.EMPTY)
                {
                    turn();
                    mapM.map[pos.x + 1, pos.y] = mapM.map[pos.x, pos.y]; //move player over 
                    mapM.map[pos.x, pos.y] = emptyTile; //replace with empty 
                    mapM.playerLoc = new Vector2Int(pos.x + 1, pos.y); //save new player location
                    mapM.map[pos.x + 1, pos.y].block.transform.position = mapM.map[pos.x + 1, pos.y].block.transform.position + Vector3.right; //move player visually
                }
                else if ((target.contents == tileContents.BLOCK || target.contents == tileContents.CRATE) && targetOver.contents == tileContents.EMPTY)
                {
                    turn();
                    mapM.map[pos.x + 2, pos.y] = mapM.map[pos.x + 1, pos.y]; //move block over
                    mapM.map[pos.x + 1, pos.y] = mapM.map[pos.x, pos.y]; //move player over 
                    mapM.map[pos.x, pos.y] = emptyTile; //replace with empty 
                    mapM.playerLoc = new Vector2Int(pos.x + 1, pos.y); //save new player location 
                    mapM.map[pos.x + 1, pos.y].block.transform.position = mapM.map[pos.x + 1, pos.y].block.transform.position + Vector3.right; //move player visually
                    mapM.map[pos.x + 2, pos.y].block.transform.position = mapM.map[pos.x + 2, pos.y].block.transform.position + Vector3.right; //move block visually
                }
            }
            else if (Input.GetKeyDown(KeyCode.LeftArrow))
            {
                Tile target = mapM.map[mapM.playerLoc.x - 1, mapM.playerLoc.y];
                //Debug.Log("Target: " + target.contents);
                //Debug.Log((mapM.playerLoc.x-1) + ", " + (mapM.playerLoc.y));
                Tile targetOver;
                try { targetOver = mapM.map[mapM.playerLoc.x - 2, mapM.playerLoc.y]; }
                catch { targetOver = wallTile; }
                //Debug.Log("TargetOver: " + target.contents);
                //Debug.Log((mapM.playerLoc.x-1) + ", " + (mapM.playerLoc.y));

                Vector2Int pos = mapM.playerLoc;
                //Debug.Log(pos + " " + target.contents);
                if (target.contents == tileContents.EMPTY)
                {
                    turn();
                    mapM.map[pos.x - 1, pos.y] = mapM.map[pos.x, pos.y]; //move player over 
                    mapM.map[pos.x, pos.y] = emptyTile; //replace with empty 
                    mapM.playerLoc = new Vector2Int(pos.x - 1, pos.y); //save new player location
                    mapM.map[pos.x - 1, pos.y].block.transform.position = mapM.map[pos.x - 1, pos.y].block.transform.position + Vector3.left; //move player visually
                }
                else if ((target.contents == tileContents.BLOCK || target.contents == tileContents.CRATE) && targetOver.contents == tileContents.EMPTY)
                {
                    turn();
                    mapM.map[pos.x - 2, pos.y] = mapM.map[pos.x - 1, pos.y]; //move block over
                    mapM.map[pos.x - 1, pos.y] = mapM.map[pos.x, pos.y]; //move player over 
                    mapM.map[pos.x, pos.y] = emptyTile; //replace with empty 
                    mapM.playerLoc = new Vector2Int(pos.x - 1, pos.y); //save new player location 
                    mapM.map[pos.x - 1, pos.y].block.transform.position = mapM.map[pos.x - 1, pos.y].block.transform.position + Vector3.left; //move player visually
                    mapM.map[pos.x - 2, pos.y].block.transform.position = mapM.map[pos.x - 2, pos.y].block.transform.position + Vector3.left; //move block visually
                }
            }

        }
    }

    private void turn()
    {
        turnsRemaining--;
        turnText.text = "Turns Remaining: " + turnsRemaining.ToString();
        foreach (GameObject b in GameObject.FindGameObjectsWithTag("Bullet"))
        {
            if(mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].contents == tileContents.EMPTY)
            {
                mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].bullet = b;
                mapM.map[(int)b.transform.position.x, (int)b.transform.position.y].bullet = null;
                b.transform.position = b.transform.position + Vector3.right;
            }
            else if ((mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].contents == tileContents.WALL) || (mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].contents == tileContents.BLOCK))
            {
                mapM.map[(int)b.transform.position.x, (int)b.transform.position.y].bullet = null;
                Destroy(b);
            }
            else if(mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].contents == tileContents.CRATE)
            {
                Destroy(mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y].block);
                mapM.map[(int)b.transform.position.x + 1, (int)b.transform.position.y] = emptyTile;
                mapM.map[(int)b.transform.position.x, (int)b.transform.position.y].bullet = null;
                Destroy(b);
                mapM.crateNum--;
                if(mapM.crateNum == 0)
                {
                    victoryCanvas.SetActive(true);
                    status = gameStatus.STOP;
                }
            }
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
    public void retry()
    {
        TitleManager.Instance.EnterLevel(TitleManager.level);
    }
}
