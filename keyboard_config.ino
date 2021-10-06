#include <Keyboard.h>


//define enter
const int enterbuttonPin = 10;
int enterbuttonState = 0;

//define space
const int spacebuttonPin = 11;
int spacebuttonState = 0;

//add joystick definition here



void setup() {
  Serial.begin(9600);
  pinMode(spacebuttonPin, INPUT_PULLUP);
  pinMode(enterbuttonPin, INPUT_PULLUP);
  //Starting state is high so the button reacts
  digitalWrite(enterbuttonPin, HIGH);
  digitalWrite(spacebuttonPin, HIGH);
  Keyboard.begin();
}

void loop() {
  spacebuttonState = digitalRead(spacebuttonPin);
  enterbuttonState = digitalRead(enterbuttonPin);
  Serial.println(enterbuttonState);
  if (enterbuttonState == 0) {
    Keyboard.press(10);
    Keyboard.press(119);
    delay(100);
    Keyboard.releaseAll(); 
  if (spacebuttonState == 0) {
    Keyboard.press(32);
    Keyboard.press(115);
    delay(!00);
    Keyboard.releaseAll();
    
  }
  }
}