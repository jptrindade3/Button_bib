#ifndef Button_bib
#define Button_bib

#include <Arduino.h>

class button
{
  public:
    but_def(int input, int output);
    void but_led();

  private:
    int _input, _output, _ledState = 1, _buttonState = 0;
};

#endif
