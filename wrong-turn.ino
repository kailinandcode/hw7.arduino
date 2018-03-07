//"You are following directions, but you took a wrong turn."

int sensorPin = A0;
int ledPin = 13;
int sensorValue = 0;

//warns continuously

int warningTime = 0;

void setup() {
  pinMOde(ledPin, OUTPUT);
}

void loop() {
  sensorValue - analogRead(sensorPin);
  while (warningTime < 10) {
    digitalWrite(ledPin, HIGH)
  }
  delay(10);
  warningTime += 1;
}
