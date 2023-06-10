#line 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\src\\Lcd\\lcd.cpp"
#include "lcd.h"

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

byte degreeSymbol[8] = {
    B00111,
    B00101,
    B00111,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000};

void setupLCD()
{
  lcd.begin(16, 2);
  lcd.createChar(0, degreeSymbol);
}

void sensoresLCD(int agua, int humedad, int temperatura)
{

  lcd.setCursor(0, 0);
  lcd.print("Agua: Hume: Tem:");
  lcd.setCursor(0, 1);
  lcd.print("   %     %    ");
  lcd.write(byte(0));
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("   ");
  lcd.setCursor(0, 1);
  lcd.print(agua);
  lcd.setCursor(6, 1);
  lcd.print("   ");
  lcd.setCursor(6, 1);
  lcd.print(humedad);
  lcd.setCursor(12, 1);
  lcd.print("  ");
  lcd.setCursor(12, 1);
  lcd.print(temperatura);

  delay(1000);
}