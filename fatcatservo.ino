#include <Servo.h>  
 
int servoPin = 9;
 
Servo servo;  
 
int servoAngle = 0;   // servo position in degrees
int delayTime = 30000; //wait time between feeding (30 sec for demonstrating purposes)
int gateClose = 10000; //wait time before gate closes (10 sec)

void setup(){
  Serial.begin(9600);  
  servo.attach(servoPin);
}
 
 
void loop(){
  
  delay(delayTime); //delays time between servo going
    
  //servo opens
  for(servoAngle = 0; servoAngle < 90; servoAngle++){
    servo.write(servoAngle);
    delay(10);  //servo speed
  }

  delay(gateClose); //gate is left open to let food come out

  //servo closes
  for(servoAngle = 90; servoAngle > 0; servoAngle--){                              
    servo.write(servoAngle);          
    delay(10);      
  } 
}
