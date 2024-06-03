#include<Servo.h>

Servo myservo;

int servo = 11;

void setup()
{
  
  myservo.attach(servo);
  myservo.write(0);
  
}

void loop()
{
  for(int pos = 0; pos <= 180; pos++){
  	myservo.write(pos);
  	delay(10);
  }
  for(int pos = 180; pos >= 0; pos--){
  	myservo.write(pos);
  	delay(10);
  }
}