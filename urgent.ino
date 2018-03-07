//"Urgent: your roof is leaking onto your bed - please come take care of it immediately." 

//to simulate the dripping, we will start with a longer delay 
//to simulate the amount of my bed that's soaked, I will increase the sensor valud

int sensorPin = A0;
int ledPin = 13;
int sensorValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  i = 0;
  while (i < sensorValue) {
    digitalWrite(ledPin, HIGH);
    delay(i + 100);
    digitalWrite(ledPin, LOW)
    i += 50;
  }
  delay(50);
}
