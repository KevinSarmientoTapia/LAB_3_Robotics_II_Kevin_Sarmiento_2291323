// Header file for Button class with debounce:
// Here, the user will be able to see all the methods that can be used in the program:

// To define the Button class:
#ifndef BUTTON_H
#define BUTTON_H
#include <Arduino.h> //We include the Arduino library

class Button{ // To open a class called Button

private: // Place where variables and functions will be hidden from the user
int pin; //variable in which the pin number in use will be saved
int state; //variable in which the state of the button (1 or 0) will be stored
int buttonState; // the current reading from the input pin
int lastButtonState = 0; // the previous reading from the input pin
unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers
bool buttonPressed;

public: // Place where variables, functions and methods will be open for the user to use
Button(){};//default constructor
Button(int pin);//constructor 
void begin();//inizialize the pin
int read();//reads pin value
};
#endif