#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd(0);
int motion = 2;
int ledpin = 10;

void setup()
{
  lcd.begin(16, 2); // 16개 셀2개의 줄을 사용하도록 설정
  lcd.clear(); 		// LCD 초기화
  pinMode(motion, INPUT);
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensor = digitalRead(motion);
  if (sensor == 1){
	lcd.setCursor(0, 0); // 첫 번째 줄에 메세지 출력
  	lcd.print("Welcome!");
    delay(5000);
  }
  else{
	lcd.setCursor(0, 0); // 첫 번째 줄에 메세지 출력
  	lcd.print("Goodbye!");
  }
}