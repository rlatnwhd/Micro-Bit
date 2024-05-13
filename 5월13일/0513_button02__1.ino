int ledPin = 8;
int buttonPin = 4;
int buttonState;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  if (buttonState == 1){
    digitalWrite(ledPin, 1);
  }
  else {
    digitalWrite(ledPin, 0);
  }
}