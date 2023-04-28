const int buttonPin = 2;
const int chargePin = 3;
const int readPin = A0;
void setup() {
pinMode(buttonPin, INPUT);
pinMode(chargePin, OUTPUT);
Serial.begin(9600);
}
void loop() {
if (digitalRead(buttonPin) == HIGH) {
 digitalWrite(chargePin, HIGH); // Charge the capacitor
 delay(5000); // Allow the capacitor to charge for 5 seconds
 digitalWrite(chargePin, LOW); // Stop charging the capacitor
while (digitalRead(buttonPin) == LOW) {
 int sensorValue = analogRead(readPin);
 float voltage = sensorValue * (5.0 / 1023.0);
 Serial.println(voltage);
 delay(100);
 }
}
}