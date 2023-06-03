#ifndef LCD_FUNCTIONS_H
#define LCD_FUNCTIONS_H

#include <Arduino.h>
#include "LiquidCrystal.h"

extern LiquidCrystal lcd;

void setupLCD();
void mostrarTextoLCD(const char* texto, int columna, int fila);

#endif
