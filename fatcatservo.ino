#include <Servo.h>  //add '<' and '>' before and after servo.h
 
int servoPin = 9;
 
Servo servo;  
 
int servoAngle = 0;   // servo position in degrees
long previousMilli = 0;
long intervalFeed = 60000; //interval at which to feed - 8 hours is 480,000 (time is in milliseconds)
long intervalKeepOpen = 10000; //keep it open for 10 seconds (10,000)


void setup(){
  Serial.begin(9600);  
  servo.attach(servoPin);
}
 
 
void loop(){
//control the servo's direction and the position of the motor
//control the servo's speed  
    delay(30000);
    
   //servo opens
  for(servoAngle = 0; servoAngle < 90; servoAngle++){
    servo.write(servoAngle);
    delay(10);  //servo speed
  }

  delay(10000);
  
  for(servoAngle = 90; servoAngle > 0; servoAngle--){                              
    servo.write(servoAngle);          
    delay(10);      
  } 
    

  //end control the servo's speed  
}
