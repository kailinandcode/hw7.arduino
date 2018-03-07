//use the sensor value to represent letter's place in the alphabe

//"You have a doctor’s appointment tomorrow." 

//there are 34 letters in the above sentence;
int sentenceLetters = 34
int processedLetters = 0;
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor
string[] letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                   'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'] 
string[] corrValues;
int[] sentence = [25, 15, 21, 8, 1, 22, 5, 1, 4, 15, 3, 20, 19, 1, 16, 16, 15, 9, 14, 19, 19, 15, 13, 15, 18, 18, 15, 22];
  

void setup() {
  for (i = 0; i < 25; i++) {
    corrValues[i] = i*10;
  }
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(corrValues[processedLetters]);
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
  procLetters += 1;
  if (processedLetters == 33) {
  delay(100);
  }
}

 for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
