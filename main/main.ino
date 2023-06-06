#include "src/Sproximidad/proximidad.h"
#include "src/Shumedad/humedad.h"
#include "src/Stemperatura/temperatura.h"
#include "src/Spresencia/presencia.h"
#include "src/Lcd/lcd.h"
#include "src/Mservo/servo.h"



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
