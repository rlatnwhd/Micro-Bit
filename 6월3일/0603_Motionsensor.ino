int motion = 2;
int ledpin = 12;

void setup()
{
  pinMode(motion, INPUT);
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensor = digitalRead(motion);
  if (sensor == 1){
    digitalWrite(ledpin, HIGH);
    Serial.println("Motion Detection!");
    delay(3000);
  }
  else{ digitalWrite(ledpin, LOW); }
  delay(1000);
}
   