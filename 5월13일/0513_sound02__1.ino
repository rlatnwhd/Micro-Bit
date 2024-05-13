#define C 262  // 도
#define D 294  // 레
#define E 330  // 미
#define F 349  // 파
#define G 392  // 솔
#define A 440  // 라
#define B 494  // 시
#define CC 523 // 도

int ledPin = 12;
int buttonPin = 4;
int buzzerPin = 3;
int buttonState;
const int toneFreq = 900;
int notes[28] = {G, G, A, A, G, G, E, E, G, G, E, E, D, D, G, G, A, A, G, G, E, E, G, E, D, E, C, C};

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  if (buttonState == 1){
    digitalWrite(ledPin, 1);
    for (int i = 0; i < 14; i++){
      tone(buzzerPin, notes[i], toneFreq);
      delay(300);
    }
    delay(500);
    for (int i = 14; i < 28; i++){
      tone(buzzerPin, notes[i], toneFreq);
      delay(300);
    }
    
  }
  else {
    digitalWrite(ledPin, 0);
    digitalWrite(buzzerPin, 0);
    noTone(buzzerPin);
  }
}