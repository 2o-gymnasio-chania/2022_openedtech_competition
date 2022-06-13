int sensor1 = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() 
{
  sensor1 = analogRead(A0);
  if (sensor1>205)
    digitalWrite(13, HIGH);
  else
    digitalWrite(13, LOW);
  Serial.println(sensor1);  
}
