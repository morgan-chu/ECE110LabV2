// Robotics with the BOE Shield - ForwardThreeSeconds
// Make the BOE Shield-Bot roll forward for three seconds, then stop.

#include <Servo.h>                           // Include servo library
 
Servo servoLeft;                             // Declare left and right servos
Servo servoRight;
 
void setup()                                 // Built-in initialization block
{ 
  tone(4, 3000, 1000);                       // Play tone for 1 second
  delay(1000);                               // Delay to finish tone

  servoLeft.attach(12);                      // Attach left signal to P13 
  servoRight.attach(11);                     // Attach right signal to P12

  
  servoLeft.writeMicroseconds(1400);
  servoRight.writeMicroseconds(1400); 
  delay(660);


  servoRight.writeMicroseconds(1600); 
  servoLeft.writeMicroseconds(1600);
  delay(600);

  // Full speed forward
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1350);        // Right wheel clockwise
  delay(10000);   // ...for 3 seconds

  
  servoLeft.detach();                        // Stop sending servo signals
  servoRight.detach(); 
}  
 
void loop()                                  // Main loop auto-repeats
{                                            // Empty, nothing needs repeating
}
