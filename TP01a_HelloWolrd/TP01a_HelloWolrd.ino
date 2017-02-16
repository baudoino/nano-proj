#include "Arduino.h"
//The setup function is called once at startup of the sketch
void setup()
{
	// Une seule fois
	  Serial.begin(9600);           //indiquer la ligne à 9600 bps

	  Serial.println("Hello world!");  // afficher hello avec retour à la ligne

}

// The loop function is called in an endless loop
void loop()
{
// ici rien
}
