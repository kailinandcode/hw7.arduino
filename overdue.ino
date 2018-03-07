/* You are an AI agent on a near-future iPhone tasked with communicating the content
of each of the following notifications messages using a single LED.
An engineer might immediately think "easy-peasy, I'll just use Morse code!"
-- but this response doesn't consider that your user is unlikely to visually parse
(or even know of) Morse code. Think instead of what piece of the message you could
reasonably get across with a single pixel; how might you communicate urgency? Or compassion? */

//"Your homework assignment is overdue." 

/*convey a sense of urgency by the following: denote the CLASS NUMBER for which the homework is due
and the fact that you need to turn it in ASAP!
*/

//an example array of course numbers you might be taking
int[] courseNumbers = [23, 190, 188];

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(rand(courseNumbers));
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds
  delay(100);
  }
}
