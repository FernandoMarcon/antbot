#include <Servo.h> 
Servo servofrente,servotras;

void setup() {
  // put your setup code here, to run once:
servofrente.attach(8);
servotras.attach(13);
}

void loop() {
  // put your main code here, to run repeatedly:
servotras.write(60);
delay(200);
servofrente.write(60);
delay(200);
servotras.write(120);
delay(200);
servofrente.write(120);
delay(
  200);
}
