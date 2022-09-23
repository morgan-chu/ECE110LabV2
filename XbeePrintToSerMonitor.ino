void setup() {
Serial.begin(9600); // initialize serial monitor
Serial2.begin(9600); // initialize Xbee Tx/Rx

delay(500);
}

void loop() {
  if(Serial2.available()) { // Is XBee data available?
    char incoming = Serial2.read(); // Read character
    Serial.println(incoming); // Send to serial monitor
  }
  delay(50);
}
