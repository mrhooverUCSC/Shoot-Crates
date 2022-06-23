using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField] MapManager mapM;
    Tile emptyTile = new Tile(tileContents.EMPTY, null); //no object for these, so make them once then apply them as needed for brevity
    Tile wallTile = new Tile(tileContents.WALL, null);
    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.DownArrow))
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
                mapM.map[pos.x, pos.y - 1] = mapM.map[pos.x, pos.y]; //move player over 
                mapM.map[pos.x, pos.y] = emptyTile; //replace with empty 
                mapM.playerLoc = new Vector2Int(pos.x, pos.y - 1); //save new player location
                mapM.map[pos.x, pos.y - 1].block.transform.position = mapM.map[pos.x, pos.y - 1].block.transform.position + Vector3.down; //move player visually
            }
            else if ((target.contents == tileContents.BLOCK || target.contents == tileContents.CRATE) && targetOver.contents == tileContents.EMPTY)
            {
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
                mapM.map[pos.x, pos.y + 1] = mapM.map[pos.x, pos.y]; //move player over 
                mapM.map[pos.x, pos.y] = emptyTile; //replace with empty 
                mapM.playerLoc = new Vector2Int(pos.x, pos.y + 1); //save new player location
                mapM.map[pos.x, pos.y + 1].block.transform.position = mapM.map[pos.x, pos.y + 1].block.transform.position + Vector3.up; //move player visually
            }
            else if ((target.contents == tileContents.BLOCK || target.contents == tileContents.CRATE) && targetOver.contents == tileContents.EMPTY)
            {
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
                mapM.map[pos.x + 1, pos.y] = mapM.map[pos.x, pos.y]; //move player over 
                mapM.map[pos.x, pos.y] = emptyTile; //replace with empty 
                mapM.playerLoc = new Vector2Int(pos.x + 1, pos.y); //save new player location
                mapM.map[pos.x + 1, pos.y].block.transform.position = mapM.map[pos.x + 1, pos.y].block.transform.position + Vector3.right; //move player visually
            }
            else if ((target.contents == tileContents.BLOCK || target.contents == tileContents.CRATE) && targetOver.contents == tileContents.EMPTY)
            {
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
                mapM.map[pos.x - 1, pos.y] = mapM.map[pos.x, pos.y]; //move player over 
                mapM.map[pos.x, pos.y] = emptyTile; //replace with empty 
                mapM.playerLoc = new Vector2Int(pos.x - 1, pos.y); //save new player location
                mapM.map[pos.x - 1, pos.y].block.transform.position = mapM.map[pos.x - 1, pos.y].block.transform.position + Vector3.left; //move player visually
            }
            else if ((target.contents == tileContents.BLOCK || target.contents == tileContents.CRATE) && targetOver.contents == tileContents.EMPTY)
            {
                mapM.map[pos.x - 2, pos.y] = mapM.map[pos.x - 1, pos.y]; //move block over
                mapM.map[pos.x - 1, pos.y] = mapM.map[pos.x, pos.y]; //move player over 
                mapM.map[pos.x, pos.y] = emptyTile; //replace with empty 
                mapM.playerLoc = new Vector2Int(pos.x - 1, pos.y); //save new player location 
                mapM.map[pos.x - 1, pos.y].block.transform.position = mapM.map[pos.x - 1, pos.y].block.transform.position + Vector3.left ; //move player visually
                mapM.map[pos.x - 2, pos.y].block.transform.position = mapM.map[pos.x - 2, pos.y].block.transform.position + Vector3.left; //move block visually
            }
        }
    }
}
