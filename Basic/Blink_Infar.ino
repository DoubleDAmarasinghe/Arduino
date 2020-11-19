#include<IRremote.h>
#define LED 13
#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

IRrecv DoubleD(11);
decode_results results;
void setup() {
Serial.begin(9600);
DoubleD.enableIRIn();

pinMode(LED, OUTPUT);

  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);
  
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

void loop() {
 if(DoubleD.decode(&results))
 {
  Serial.println(results.value, DEC);
  DoubleD.resume();
  }
  delay(100);
  long val = results.value;
  if (val == 700251523){
  motor1.setSpeed(255); //Define maximum velocity
 motor1.run(FORWARD); //rotate the motor clockwise
motor2.setSpeed(255); //Define maximum velocity
motor2.run(FORWARD); //rotate the motor clockwise
  //motor3.setSpeed(255);//Define maximum velocity
 //motor3.run(FORWARD); //rotate the motor clockwise
//motor4.setSpeed(255);//Define maximum velocity
//motor4.run(FORWARD); //rotate the motor clockwise
   }
}
