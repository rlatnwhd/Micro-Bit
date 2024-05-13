int ledPin = 12;
int buttonPin = 4;
int buzzerPin = 3;
int buttonState;

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
    digitalWrite(buzzerPin, 1);
  }
  else {
    digitalWrite(ledPin, 0);
    digitalWrite(buzzerPin, 0);
  }
}