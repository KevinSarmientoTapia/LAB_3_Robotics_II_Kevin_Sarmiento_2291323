// CPP file for Button class:
// Here, the methods will be developed.

#include "Button.h" // To include our Button header file
Button::Button(int pin){ // Declare pin an variables for the constructor
int state;
this->pin=pin;
this->state=state;
}
void Button::begin(){ // Set pin of the constructor
pinMode(pin, INPUT);
}
int Button::read(){ // Variable state gets the digital value of the button (1 or 0) with debounce:
int reading = digitalRead(pin); //digital read the pin 
      
      if (reading != lastButtonState) {
    // reset the debouncing timer
    lastDebounceTime = millis();
  }

   if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;
      // Check if button is pressed
      if (buttonState == 1) {
        // Only toggle the LED if button was not pressed before
        if (!buttonPressed) {
          //ledState = !ledState;
          buttonPressed = true;
          return 1; // Return 1 when button is first pressed
        } else {
          return 0; // Return 0 when button is continuously pressed
        }
      } else {
        buttonPressed = false;
      }
    }
  }
  lastButtonState = reading;
  return 0; // Return 0 if button is not pressed
}