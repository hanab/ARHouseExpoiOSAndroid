using UnityEngine;
using UnityEngine.UI;

public class ChangeTextScript : MonoBehaviour {

    public Text houseText;
	void Start() {
		
	}

	// show which company the building belong to
	public void ChangeText(int id) {
		if (id % 2 == 0) {
			houseText.text = "Muurame";

		} else {
			houseText.text = "Honkarakenne";
		}
	}
}
