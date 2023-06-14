#line 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\src\\Lcd\\lcd.h"
#ifndef LCD_FUNCTIONS_H
#define LCD_FUNCTIONS_H

#include <Arduino.h>
#include "LiquidCrystal.h"

extern LiquidCrystal lcd;

void setupLCD();
void sensoresLCD(int agua, int humedad, int temperatura);

void setupAnimacion();
void desplazar_dino(int retarder, char *mesage);

#endif
