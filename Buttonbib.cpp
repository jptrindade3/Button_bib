#include "Button_bib.h"

button::but_def(int input, int output){
  pinMode(input, INPUT);
  pinMode(output, OUTPUT);
  _input = input;
  _output = output;
}
/*-----//--------------------//-------------------//-----*/

void button::but_led(){
  int pressedButton = digitalRead(_input);

  if (pressedButton == HIGH && _buttonState == 0){
    _buttonState = 1;
    if (_ledState == HIGH){
      digitalWrite(_output, LOW);
      _ledState = 0;  
    }
    else {
      digitalWrite(_output, HIGH);
      _ledState = 1;
    }
  }
  if(pressedButton == LOW) { 
    _buttonState = 0;
  }
  delay(10);
}
