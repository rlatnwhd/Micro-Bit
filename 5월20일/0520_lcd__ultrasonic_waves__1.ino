// I2D LCD 모듈을 제어하기 위해 라이브러리 추가
#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd(0);

const int trigPin = 7; // 초음파 센서 출력
const int echoPin = 6; // 초음파 입력 값

// 변수 지정
long duration; // 지속 시간
int distance; // 거리

void setup()
{
  lcd.begin(16, 2); // 16개 셀2개의 줄을 사용하도록 설정
  lcd.clear(); 		// LCD 초기화
  pinMode(trigPin, OUTPUT); // trigPin으로 출력
  pinMode(echoPin, INPUT); // echoPin으로 입력
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); // 딜레이 중 다른 동작이 수행 가능
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // != delay
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 340 / 10000) / 2; // 거리 설정
  
  lcd.setCursor(0, 0); // 첫 번째 줄에 메세지 출력
  lcd.print("Distance : ");
  lcd.print(distance);
  lcd.print("cm");
  
  delay(1000);
}