int outputpin = A3; // 센서와 연결된 아날로그 핀 설정
int redpin = 13;
int bluepin = 8;
int greenpin = 5;
int sensorPin = A0;
int sensorValue = 0;
int reading;

void setup()
{
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorValue = analogRead(sensorPin);
  reading = analogRead(outputpin); // 센서로부터 자료값을 받음
  
  // 입력받은 자료값을 수정하여 필요한 자료값으로 바꿈
  float voltage = reading * 5.0 / 1024.0;
  float cel = (voltage - 0.5) * 100;
  
  // 수정하여 나온 자료값을 출력
  Serial.print(cel);
  Serial.println("C");
  Serial.print("water value : ");
  Serial.println(sensorValue);
  Serial.println("--------------------");
  
  if (cel > 35 && sensorValue > 300) {
    digitalWrite(redpin, 0);
    digitalWrite(bluepin, 0);
    digitalWrite(greenpin, 1);
  }
  else if(cel > 35 && sensorValue < 300) {
    digitalWrite(redpin, 0);
    digitalWrite(bluepin, 1);
    digitalWrite(greenpin, 0);
  }
  else {
    digitalWrite(redpin, 1);
    digitalWrite(bluepin, 0);
    digitalWrite(greenpin, 0);
  }
  delay(1000);
}