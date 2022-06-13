int trofi=13;
int nero=12;
int trofi_epano=A1;
int trofi_kato=A0;
int orio_trofis=600;
int nero_epano=2;
int nero_kato=3;
void setup() 
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(trofi, OUTPUT);
  digitalWrite(trofi, LOW);
  pinMode(nero, OUTPUT);
  digitalWrite(nero, LOW);
  pinMode(nero_epano,INPUT_PULLUP);
  pinMode(nero_kato,INPUT_PULLUP);

}

// the loop function runs over and over again forever
void loop() 
{

// trofi
  if (analogRead(trofi_kato)<orio_trofis)
    while(analogRead(trofi_epano)<orio_trofis)
        digitalWrite(trofi, HIGH);
  else
  digitalWrite(trofi, LOW);


// nero
  if (digitalRead(nero_kato))
    while(digitalRead(nero_epano))
        digitalWrite(nero, HIGH);
  else
  digitalWrite(nero, LOW);
}
