#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  analogReference(DEFAULT);
  pinMode(A0, INPUT);   
  lcd.init();         
  lcd.backlight();    
  lcd.setCursor(0, 0);
  lcd.print("Temp Monitor");
  delay(1000);
}

void loop() {
  int x = analogRead(A0); 
  float T = (float)((x * 5.0 * 100.0) / 1024.0);

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(T, 2);
  lcd.print(" C   "); 

  delay(500);
}