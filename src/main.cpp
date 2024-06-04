#include <Arduino.h>


const int relay = 12; 
const int button = 4; 
int buttonState = LOW;
int relayState = LOW;
int lastButtonState = LOW;


/*const int relay2 = 7; 
unsigned long tempoAnterior =0;
const int intervalo = 1000; */


void setup() {
   // Set the pin 12 as outpu
  pinMode(relay, OUTPUT); // vai alimentar a porta 12
  pinMode (button, INPUT_PULLUP);
 // pinMode(relay2, OUTPUT); // vai alimentar a porta 12
}

void loop() {
 
buttonState = digitalRead(button);
 if (buttonState == LOW && lastButtonState == LOW) {
  relayState = !relayState;
  digitalWrite(relay, relayState);
 }
 lastButtonState = buttonState; 



 /*unsigned long tempo = millis();
  if(tempo - tempoAnterior >= intervalo){
    tempoAnterior = tempo;
    int relayState = digitalRead(relay);
    digitalWrite(relay, !relayState); 
    //digitalWrite(relay2, !relayState); 

  }*/
  
}

