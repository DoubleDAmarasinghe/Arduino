#define LED 13
#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
void setup() {
  pinMode(LED, OUTPUT);

  /*motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);
  
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);*/
}

void loop() {
   /*digitalWrite(LED, HIGH);
   delay(250);
   digitalWrite(LED, LOW);
   delay(250);*/

   motor1.setSpeed(100); 
   motor1.run(FORWARD); 
   motor2.setSpeed(100);
   motor2.run(FORWARD); 
   motor3.setSpeed(100);
   motor3.run(FORWARD); 
   motor4.setSpeed(100);
   motor4.run(FORWARD); 

   delay(1000);

  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);

  delay(1000);

   motor1.setSpeed(100); 
   motor1.run(BACKWARD); 
   motor2.setSpeed(100);
   motor2.run(BACKWARD); 
   motor3.setSpeed(100);
   motor3.run(FORWARD); 
   motor4.setSpeed(100);
   motor4.run(FORWARD); 

   delay(1000);

   motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);

   delay(1000);

   motor1.setSpeed(100); 
   motor1.run(FORWARD); 
   motor2.setSpeed(100);
   motor2.run(FORWARD); 
   motor3.setSpeed(100);
   motor3.run(BACKWARD); 
   motor4.setSpeed(100);
   motor4.run(BACKWARD); 

    delay(1000);

    motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);

   delay(1000);

   motor1.setSpeed(100); 
   motor1.run(FORWARD); 
   motor2.setSpeed(100);
   motor2.run(FORWARD); 
   motor3.setSpeed(100);
   motor3.run(FORWARD); 
   motor4.setSpeed(100);
   motor4.run(FORWARD); 
}
