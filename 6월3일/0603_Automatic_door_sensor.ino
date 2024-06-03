#include<Servo.h>

Servo myservo;

int servo = 11;
int motion = 2;
int ledpin = 9;

void setup()
{
  myservo.attach(servo);
  myservo.write(0);
  pinMode(motion, INPUT);
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensor = digitalRead(motion);
  if (sensor == 1){
    digitalWrite(ledpin, HIGH);
    myservo.write(90);
    Serial.println("Opening The Door");
    delay(5000);
    Serial.println("Closing The Door");
  }
  else{
    digitalWrite(ledpin, LOW);
    myservo.write(0);
    delay(1000);
  }
}