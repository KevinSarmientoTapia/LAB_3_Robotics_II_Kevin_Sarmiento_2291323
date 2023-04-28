/*
  Demo project pressing PB will switch one LED on ( led1 on then 2 then 3 then 4 )

  The program's goal is to switch the LED to turn on from left to right by just pressing a PB one time.
  
  The theme is the use of the libraries "led.h" and "button.h" to control the LEDs and read the state of the PB
*/
#include "led.h" //includes the LED library created
#include "Button.h" //includes the PB library created
Button PB(2); //PB object created, states the pin connected to the button
led Blue(3); //blue LED object created, states the pin connected to the blue LED
led red(4); //red LED object created, states the pin connected to the red LED
led Green(5); //green LED object created, states the pin connected to the green LED
led Yellow(6); //yellow LED object created, states the pin connected to the yellow LED
int count=0; //initialize the count to 0
bool ButtonValue; //boolean to store the state of the PB
void setup() {
  // put your setup code here, to run once:
Blue.begin(); //set LED as output
red.begin(); //set LED as output
Green.begin(); //set LED as output
Yellow.begin(); //set LED as output
PB.begin(); //set PB as input
Serial.begin(9600); //initalize the Serial Monitor
}

void loop() {
  // put your main code here, to run repeatedly:
ButtonValue=PB.read(); //"ButtonValue" equals the state of the PB
if (ButtonValue==1){ //if the state of the button equals 1 then:
//add one to the counter
count++;
}   
Serial.println(count); //print the value of the counter in the Serial Monitor
switch (count) { // Switch case of the variable "count"
  case 0: // in case "count" equals 0:
  //dont turn on any LED
    Blue.off();  
    red.off();
    Green.off();
    Yellow.off();
    break;
  case 1: // in case "count" equals 1:
  //turn on the blue LED
    Blue.on();  
    red.off();
    Green.off();
    Yellow.off();
    break;
  case 2: // in case "count" equals 2:
  //turn on the red LED
    Blue.off(); 
    red.on();
    Green.off();
    Yellow.off();  
    break;
  case 3: // in case "count" equals 3:
  //turn on the green LED
    Blue.off();  
    red.off();
    Green.on();
    Yellow.off();
    break;
  case 4: // in case "count" equals 4:
  //turn on the yellow LED
    Blue.off();  
    red.off();
    Green.off();
    Yellow.on(); 
    break;
  default : // in case "count" equals none of the above:
  //dont turn on any LED, reset the counter to 0
    Blue.off();  
    red.off();
    Green.off();
    Yellow.off();
    count=0;
    break;
 }  
}