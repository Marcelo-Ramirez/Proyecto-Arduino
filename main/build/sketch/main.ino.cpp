#include <Arduino.h>
#line 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
#include "src/Sproximidad/proximidad.h"
#include "src/Shumedad/humedad.h"
#include "src/Lcd/lcd.h"

#line 5 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
void setup();
#line 13 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
void loop();
#line 5 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
void setup()
{
    setupLCD();
    setupHumedad();
    setupProximidad();
    Serial.println(9600);
}

void loop()
{
    int porcenHumedad = porcentageHumedad();
	int distance = distanceProx();
    mostrarTextoLCD("Hola mundo", 0, 0);
}

