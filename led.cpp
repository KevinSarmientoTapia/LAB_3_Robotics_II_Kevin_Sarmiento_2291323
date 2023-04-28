// CPP file for Button class:
// Here, the methods will be developed.

#include "led.h" // To include our LED header file

led::led(int pin){ // Declare pin an variables for the constructor
this->pin=pin;
}

void led::begin(){ // Set pin of the constructor
pinMode(pin, OUTPUT);
}

void led::on(){ // turn on LED
digitalWrite(pin, 1);
}

void led::off(){ // turn off LED
digitalWrite(pin, 0);
}
