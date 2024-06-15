#include <Servo.h>
Servo servo;
int servoPin = 3;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(servoPin,OUTPUT);
  servo.attach(servoPin);
}


void loop() {
  servo.write(0);
  // put your main code here, to run repeatedly:
   if(Serial.available()){
    char a = Serial.read();
   
    switch(a){
      case 'o' :
           servo.write(90);
           delay(500);
           servo.write(0);
           break;
           
      case 'f' :
           servo.write(0);
           break;
           
      default:
           break;    
    }
  }
}