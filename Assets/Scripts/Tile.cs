using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Two layers to the tile; the base layer, which has the 'contents' to tell what it is and the 'block' as the referene to the gameobject it refers to
//Second layer is just for bullets, so null is empty and having something is to show there is a bullet there.
public class Tile
{
    public tileContents contents;
    public GameObject block;
    public GameObject bullet;
    public Tile(tileContents c, GameObject go, GameObject b)
    {
        contents = c;
        block = go;
        bullet = b;
    }
}

