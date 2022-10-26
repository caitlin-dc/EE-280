#include <Arduino.h>
  //settings:
  #define freq 60// Circuit frequency in Hz (period of 16.67ms)

  //set initial values of t_on and t_off
  float t_on = 10;  // on period of the pulse in ms - for Bright Light
  float t_off = 6.67;  // off period of the pulse in ms - for Bright Light'
  
  //This code runs one time on startup or reset.
  void setup() {
    //set the DIGITAL pin 1 as an output pin
    pinMode(1, OUTPUT);
  }

  //This code loops 3 times.
  void loop() {
      //Bright Light
      t_on = 15.00; t_off = 1.67;
      digitalWrite(1, HIGH); //LED turns on
      delay(t_on);           //LED stays on
      digitalWrite(1, LOW);  //LED turns off
      delay(t_off);          //LED stays off

  }
