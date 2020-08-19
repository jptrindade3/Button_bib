#include "Button_bib.h"

button led;

void setup(){
  Serial.begin(9600);
  led.but_def(7, 13);
}

void loop(){
  led.but_led();
}
