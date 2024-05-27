int outputpin = A3; // 센서와 연결된 아날로그 핀 설정
int ledpin = 4;
int buzzerPin = 13;

void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600); // 시리얼 통신을 열고 속도를 9600bps로 사용
}

void loop()
{
  int reading = analogRead(outputpin); // 센서로부터 자료값을 받음
  
  // 입력받은 자료값을 수정하여 필요한 자료값으로 바꿈
  float voltage = reading * 5.0 / 1024.0;
  float celsiustemp = (voltage - 0.5) * 100;
  float fahrenheittemp = celsiustemp * 9.0 / 5.0 + 32.0;
  
  // 수정하여 나온 자료값을 출력
  Serial.print(celsiustemp);
  Serial.println("C");
  Serial.print(fahrenheittemp);
  Serial.println("F");
  Serial.println("--------------------");
  
  if (celsiustemp >= 30){
    digitalWrite(ledpin, 1);
    digitalWrite(buzzerPin, 1);
  }
  else {
    digitalWrite(ledpin, 0);
    digitalWrite(buzzerPin, 0);
  }
  
  delay(1000);
}