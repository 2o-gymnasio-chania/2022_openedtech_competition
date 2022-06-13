int sensor1, sensor2, sensor3;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  sensor1=0;
  sensor2=0;
}

void loop() 
{
  sensor1 = analogRead(A0);
  sensor2 = analogRead(A1);
  if (sensor1>205 or sensor2>205)
    digitalWrite(13, HIGH);
  else
    digitalWrite(13, LOW);
  Serial.println(sensor1);  
}
