using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile
{
    public tileContents contents;
    public GameObject block;
    public Tile(tileContents c, GameObject go)
    {
        contents = c;
        block = go;
    }
}
