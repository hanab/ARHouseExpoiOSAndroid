using UnityEngine;
using System.Collections;

/*
 *  Set id for house to make it easier to find
 */
public class HouseID : MonoBehaviour {

    public int id;
    public bool isActive = false;
    public bool isLast = false;
   
	void Awake()
    {
        isActive = gameObject.activeInHierarchy;
    }
}
