int sensorPin = A0;
int sensorValue = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  sensorValue = analogRead(sensorPin);
  Serial.print("water value : ");
  Serial.println(sensorValue);
  
  if (sensorValue < 300) Serial.println("There's not enough water.");
  delay(1000);
}