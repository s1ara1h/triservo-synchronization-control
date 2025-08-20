#include <Servo.h>

// Create three servo objects to control three servo motors
Servo servo1;
Servo servo2;
Servo servo3;

// Variables to store positions
int pos1 = 0;
int pos2 = 0;
int pos3 = 0;

void setup() {
  // Attach servo motors to digital pins
  servo1.attach(9);   // First servo on pin 9
  servo2.attach(10);  // Second servo on pin 10
  servo3.attach(11);  // Third servo on pin 11
  
  // Initialize starting position
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  delay(500);
}

void loop() {
  // Synchronized movement of servo motors from 0 to 180 degrees
  for (int pos = 0; pos <= 180; pos += 1) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    delay(15);
  }
  
  delay(1000); // Wait for one second
  
  // Synchronized movement of servo motors from 180 to 0 degrees
  for (int pos = 180; pos >= 0; pos -= 1) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    delay(15);
  }
  
  delay(1000); // Wait for one second
}