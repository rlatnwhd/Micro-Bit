#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd(0);

void setup()
{
  lcd.begin(16, 2); // 16개 셀2개의 줄을 사용하도록 설정
  lcd.clear(); 		// LCD 초기화
}

void loop()
{
  lcd.setCursor(0, 0); // 첫 번째 줄에 메세지 출력
  lcd.print("hello world!");
  
  lcd.setCursor(0, 1); // 두 번째 줄에 카운팅
  lcd.print(millis() / 1000);
  delay(1000);
}