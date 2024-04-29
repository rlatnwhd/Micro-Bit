int ledPin = 5; // 아날로그 핀 설정(숫자 앞에 물결(~)붙은거만 가능)
int brightness = 0; // LED 밝기
int fadeAmount = 1; // LED Fade할 포인트 수

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  analogWrite(ledPin, brightness);
  brightness += fadeAmount;
  if(brightness <= 0 || brightness >= 255){
    fadeAmount *= -1; 
  }
  delay(10);
}