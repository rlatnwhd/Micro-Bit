int cds = A0;
int redpin = 13;
int greenpin = 9;

void setup()
{
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int cdsValue = analogRead(cds);
  Serial.print("cds = ");
  Serial.println(cdsValue);
  
  if (cdsValue >= 100){
    digitalWrite(redpin, 1);
    digitalWrite(greenpin, 1);
  }
  else {
    digitalWrite(redpin, 0);
    digitalWrite(greenpin, 0);
  }
  delay(500);
}