const int signalPin = 9;
void setup() {
pinMode(signalPin, OUTPUT);
}
void loop() {
digitalWrite(signalPin, HIGH);
delayMicroseconds(500); // 500 microseconds High, 1 kHz square wave
digitalWrite(signalPin, LOW);
delayMicroseconds(500); // 500 microseconds Low, 1 kHz square wave
}

