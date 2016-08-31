using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ButtonID : MonoBehaviour {

	// Use this for initialization
	public int id = 0;
	public Button button;

	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
    }

	// called when a button is pressed it passes the iD of the button and changes the scene
	public void ChangeScene(){
		
     ButtonIdAbsorber.idAbsorbed = this.id;
	 SceneManager.LoadScene("ARCamera");
	}
	
}
