#include "src/Sproximidad/proximidad.h"
#include "src/Shumedad/humedad.h"
#include "src/Lcd/lcd.h"

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
