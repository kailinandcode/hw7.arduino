/*implements a "level meter" using these three LEDs. 
When the potentionmeter is turned all the way counter-clockwise, all LEDs should be off. 
As you turn it clockwise, each subsequent LED should turn on as the rotation passes 1/4, 2/4, and 3/4 of the way around.
You can base your code on the Analog Input sketch we used in class
(found in the Arduino IDE under File > Examples > Analog > AnalogInput). 
You won't need blinking, but you will need an if statement
that checks the sensorValue to see how rotated your potentiometer is.*/

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin1 = 13;   
int ledPin2 = 12;
int ledPin3 = 11;
// select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // write an if statement to check the sensorValue
  if (sensorValue == 1230/4 ) {
    digitalWrite(ledPin1, HIGH);
  }
  if (sensorValue == 3*1230/4) {
     digitalWrite(ledPin1, LOW);
     digitalWrite(ledPin2, HIGH);
  }
  if (sensorValue == 2*1230/4) {
     digitalWrite(ledPin2, LOW);
     digitalWrite(ledPin3, HIGH);
  }
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}
