#include <Servo.h>
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int sensor1, sensor2;
Servo myservo;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  sensor1=0;
  sensor2=0;
  myservo.attach(10);
  int i=0;
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("2o Gymn. Chanion");
  lcd.setCursor(0, 1);
  for (i=1; i<17; i++)
  {
    lcd.print(".");
    delay(150);
  }

}

void loop()
{
  sensor1 = analogRead(A0);
  sensor2 = analogRead(A1);
  if (sensor1>205 or sensor2>205)
  {
    lcd.setCursor(0, 0);
    lcd.print("The BinBot robot");
    lcd.setCursor(0, 1);
    lcd.print("     is FULL    ");
    digitalWrite(13, HIGH);
    myservo.write(180);
    delay(500);
    lcd.noDisplay();
    delay(500);
    lcd.display();
    delay(500);
  }
  else
  {
    digitalWrite(13, LOW);
    lcd.setCursor(0, 0);
    lcd.print("The BinBot robot");
    lcd.setCursor(0, 1);
    lcd.print("    is ready    ");
    myservo.write(0);
    delay(500);
  }
  /*Serial.println(sensor1);
  Serial.println(sensor2);
  Serial.println("...");*/
}
