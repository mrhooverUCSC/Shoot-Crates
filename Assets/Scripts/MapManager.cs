using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public enum tileContents
{
    EMPTY = 0,
    PLAYER, //controllable player
    CRATE, //objective, destroy these
    BLOCK, //no destroy, only push
    WALL, //cannot be moved
    BRIDGE, //can be jumped over in a line
    PIT //bullets go over, but can be filled instead to be removed
}
public class MapManager : MonoBehaviour
{
    public Tile[,] map; //what the tile has and the gameobject it represents
    public int crateNum = 0;
    Tile wallTile = new Tile(tileContents.WALL, null, null); //walls don't care about their gameobject
    [SerializeField] public Vector2Int zone; //add one to top right location. 0,0 is bottom left.
    [SerializeField] public int turns;
    [SerializeField] GameObject objects;
    public Vector2Int playerLoc;
    public GameObject player;
    // Start is called before the first frame update
    void Start()
    {
        map = new Tile[zone.x,zone.y]; //construct the 2D array based on the size given.
        for(int i = 1; i < zone.x - 1; ++i) //fill the inside with empties
        {
            for(int j = 1; j < zone.y - 1; ++j)
            {
                map[i, j] = new Tile(tileContents.EMPTY, null, null);
            }
        }
        for(int i = 0; i < zone.x; ++i) //Boundary walls are outline from 0,0 to zone.x,zone.y. These are not objects, just the tilemap, for efficency's sake.
        {
            map[i, 0] = map[i, zone.y-1] = wallTile; //Debug.Log(i + "|0, " + i + "|" + (zone.y-1));
        }
        for (int i = 0; i < zone.y; ++i)
        {
            map[0, i] = map[zone.x-1, i] = wallTile; //Debug.Log("0|" + i + ", " + (zone.x - 1) + "|" + i);
        }
        foreach (Transform go in objects.GetComponentInChildren<Transform>())        //rip the objects into the map array
        {
            //Debug.Log(go.position.x + " " + go.position.y);
            if (go.tag == "Player")
            {
                map[(int)go.position.x, (int)go.position.y] = new Tile(tileContents.PLAYER, go.gameObject, null);
                playerLoc = new Vector2Int((int)go.position.x, (int)go.position.y);
                player = go.gameObject;
            }
            else if (go.tag == "Wall")
                map[(int)go.position.x, (int)go.position.y] = wallTile;
            else if (go.tag == "Block")
                map[(int)go.position.x, (int)go.position.y] = new Tile(tileContents.BLOCK, go.gameObject, null);
            else if (go.tag == "Crate")
            {
                map[(int)go.position.x, (int)go.position.y] = new Tile(tileContents.CRATE, go.gameObject, null);
                crateNum++;
            }
            else if(go.tag == "Bridge")
                map[(int)go.position.x, (int)go.position.y] = new Tile(tileContents.BRIDGE, go.gameObject, null);
            else if(go.tag == "Pit")
                map[(int)go.position.x, (int)go.position.y] = new Tile(tileContents.PIT, go.gameObject, null);
        }
        Debug.Log("map loaded");
    }

    public void CopyMap(Tile[,] m)
    {
        for(int i = 0; i < zone.x; ++i)
        {
            for(int j = 0; j < zone.y; ++j)
            {
                map[i, j] = m[i, j];
            }
        }
    }

    public bool ShootHeuristic() //used in auto heuristic. 
    {
        //if no crates to the right, don't shoot
        foreach (GameObject go in GameObject.FindGameObjectsWithTag("Crate"))
        {
            if(go.transform.position.x > playerLoc.x)
            {
                return true;
            }
        }
        return false;
    }

    public bool WallHere(TurnChoice t)
    {
        if(t == TurnChoice.SHOOT && map[playerLoc.x + 1, playerLoc.y].contents == tileContents.BLOCK)
        {
            return true;
        }
        if((t == TurnChoice.SHOOT || t == TurnChoice.RIGHT) && map[playerLoc.x + 1, playerLoc.y].contents == tileContents.WALL)
        {
            return true;
        }
        else if(t == TurnChoice.UP && map[playerLoc.x, playerLoc.y + 1].contents == tileContents.WALL)
        {
            return true;
        }
        else if (t == TurnChoice.DOWN && map[playerLoc.x, playerLoc.y - 1].contents == tileContents.WALL)
        {
            return true;
        }
        else if (t == TurnChoice.LEFT && map[playerLoc.x - 1, playerLoc.y].contents == tileContents.WALL)
        {
            return true;
        }
        return false;
    }
}
