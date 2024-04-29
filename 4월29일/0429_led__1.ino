int yellowPin = 4; // 핀 번호 설정
int greenPin = 9;
int redPin = 2;
// C++ code
// 이 코드는 실행시 한 번만 실행된다.
// 세팅하는 곳
void setup()
{
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  // LED를 출력모드로 설정
}

// 반복하여 작업실행
void loop()
{
  // 실제 차도 신호 코드 만들어 보기
  digitalWrite(greenPin, HIGH); // 핀을 HIGH(1)로 출력하라
  delay(10000); // 딜레이 시간 설정
  digitalWrite(greenPin, LOW); // 핀을 HIGH(2)로 출력하라
  digitalWrite(yellowPin, HIGH);
  delay(2000);
  digitalWrite(yellowPin, LOW); 
  digitalWrite(redPin, HIGH);
  delay(10000);
  digitalWrite(redPin, LOW);
}