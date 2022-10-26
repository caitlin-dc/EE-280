#include <Arduino.h>
  int analogPin = A0;     //analog input connected to the 5[V] supply
  double readValue = 0;   //variable readValue will store the digitalized value of A0
  double voltageCalc = 0; //variable voltageCalc stores the analog voltage value of A0
  int counter = 0;        //initialize the coutner that tracks the samples collected for A0
  int samples = 100;      //number of total samples that Arduino will collect from A0
  
  void setup() {
    Serial.begin(9600);   //setup serial port to read A0 at 9600 baud 
  }
  
  void loop() {
    //the while loop will repeat continuously so long as the condition is true
    //here, the condition is that the number of samples collected is less than samples
    while (counter < samples) {
      readValue = analogRead(analogPin); //read the digitized value of A0
      //convert the digitized value to an analog voltage to the nearest 4.888[mV]
      //print analog voltages to the serial monitor to observe values
      //from the serial monitor, values can be copied and pasted to a file   
      voltageCalc = (readValue*5)/1023; //calculates the analog voltage value rather than digitized value
      Serial.println(voltageCalc);         
      counter++;                        //increment the counter by 1

      if (counter == samples) {         //After the last sample
        Serial.print(samples);          //Serial.println prints to serial with a carriage return
        Serial.println(" Voltage measurements are as recorded above!");
      }
    }
}
