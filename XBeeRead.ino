#define redpin 45
#define greenpin 46
#define bluepin 44

void setup() {
  Serial.begin(9600); // initialize serial monitor
  Serial2.begin(9600); // initialize Xbee Tx/Rx
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  set_RGB(255, 255, 255);

  delay(500);
}

void loop() {
  if(Serial2.available()) { // Is XBee data available?
    char incoming = Serial2.read(); // Read character
    int vowelValues[] = {65, 69, 73, 79, 85};
    int yAscii = 89;
    for(int i : vowelValues){
      if(incoming == i){
        set_RGB(255, 0, 255);
        break;
        }
      else{
        if(incoming == yAscii){
          set_RGB(255,255,0);
          break;
          }
        else{
          set_RGB(0,255,255);
          break;
          }
        }
      }

    Serial.println(incoming); // Send to serial monitor
  }
  delay(50);
}

void set_RGB(int r, int g, int b){
  // Set RGB LED pins based on low=bright (default)
  analogWrite(redpin, r);
  analogWrite(greenpin, g);
  analogWrite(bluepin, b);
}
