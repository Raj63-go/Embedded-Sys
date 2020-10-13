#include <LiquidCrystal.h>         
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Digital pins to which you connect the LCD
const int inPin = A0;                   // A0 is where you connect the sensor
void setup()
{
  lcd.begin(16,2);
  pinMode(A0,INPUT);
}
void loop()
{
 int a; 
  a=analogRead(A0);
  Serial.println(a);
  delay(1000);
  int value = analogRead(a); // read the value from the sensor
  lcd.setCursor(0,1);
  float millivolts = (value / 1024.0) * 5000; 
  float celsius = millivolts / 100;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(celsius);
  lcd.print("C");
  //lcd.setCursor(0,1);
  //lcd.print((celsius * 9)/5 + 32); //turning the celsius into fahrehait
  //lcd.print("F");
  delay(1000);
}
