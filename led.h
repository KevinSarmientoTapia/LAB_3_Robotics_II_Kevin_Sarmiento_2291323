// Header file for LED class
// Here, the user will be able to see all the methods that can be used in the program:

// To define the Button class:
#ifndef LED_H
#define LED_H
#include <Arduino.h> //We include the Arduino library

class led{ // To open a LED called Button
  
private:
int pin; //variable in which the pin number in use will be saved

public:
led(){}; //default constructor
led(int pin); //constructor 
void begin(); //inizialize the pin
void on(); // turn on LED
void off(); // turn off LED
};

#endif