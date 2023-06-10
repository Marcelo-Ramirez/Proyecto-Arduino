#include "humedad.h"

int pinHumedad = A0;

void setupHumedad()
{
    pinMode(A0, INPUT);
}

int porcentageHumedad()
{
    int sensorValue = analogRead(pinHumedad);
    int porcentage = map(sensorValue, 0, 1023, 0, 100);
    return porcentage;
}