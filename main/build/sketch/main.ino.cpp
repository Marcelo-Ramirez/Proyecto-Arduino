#include <Arduino.h>
#line 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
#include "src/Sproximidad/proximidad.h"
#include "src/Shumedad/humedad.h"
#include "src/Stemperatura/temperatura.h"
#include "src/Spresencia/presencia.h"
#include "src/Lcd/lcd.h"
#include "src/Mservo/servo.h"



#line 10 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
void setup();
#line 26 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
void loop();
#line 10 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
void setup()
{
    //SENSORES
    setupTemperatura();
    setupLCD();
    setupHumedad();
    setupProximidad();
    setupPresencia();

    //MOTORES
    setupServo();


    Serial.begin(9600);
}

void loop()
{
    delay(1000);
    Serial.println(distanceProx());
}

