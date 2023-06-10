#line 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\src\\Lcd\\lcd.h"
#ifndef LCD_FUNCTIONS_H
#define LCD_FUNCTIONS_H

#include <Arduino.h>
#include "LiquidCrystal.h"

extern LiquidCrystal lcd;

void setupLCD();
void nivelAgua(int porcentage);
void nivelTemperatura(int nivel);
void nivelHumedad(int porcentage);

#endif
