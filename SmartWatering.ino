// Welcome to the IoT smart watering system 
// sensor reqruiement = YL-69,Relay,mini water pump,NodeMCU 
// this porject is for NodeMCU 
int sensorPin = A0;
int sensorValue;
int limit = 700;

void setup()
{
  Serial.begin(115200);
  pinMode(2, OUTPUT); //Digital Pin D4 
}

void loop()
{
  sensorValue = analogRead(sensorPin);
  Serial.println("Kelembapan : ");
  Serial.println(sensorValue);

  if (sensorValue>limit)
  {
    digitalWrite(2, LOW);
  }
  else
  {
    digitalWrite(2, HIGH);
  }
  delay(1000);
}
