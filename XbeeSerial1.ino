const int ledPin = 13;
const int buttonPin = 2;

void setup() {
Serial.begin(9600); // initialize serial monitor
Serial2.begin(9600); // initialize Xbee Tx/Rx

pinMode(buttonPin, INPUT_PULLUP);

delay(500);
}

void loop() {
  int buttonState;
  buttonState = digitalRead(buttonPin);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    Serial2.print('9');
    delay(1000);
    digitalWrite(ledPin, LOW);
  } 
//  if(Serial.available()) { // Is serial monitor data available?
//    char outgoing = Serial.read(); // Read character
//    Serial2.print(outgoing); // Send to XBee
//  }
//  if(Serial2.available()) { // Is XBee data available?
//    char incoming = Serial2.read(); // Read character
//    Serial.println(incoming); // Send to serial monitor
//  }
//  delay(50);
}
