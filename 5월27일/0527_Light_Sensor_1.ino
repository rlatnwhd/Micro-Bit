int cds = A0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int cdsValue = analogRead(cds);
  Serial.print("cds = ");
  Serial.println(cdsValue);
  delay(500);
}