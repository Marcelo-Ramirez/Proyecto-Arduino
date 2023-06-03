#line 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\src\\Lcd\\lcd.cpp"
#include "lcd.h"

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setupLCD() {
  lcd.begin(16, 2);
  lcd.clear();
}

void mostrarTextoLCD(const char* texto, int columna, int fila) {
  lcd.setCursor(columna, fila);
  lcd.print(texto);
}
