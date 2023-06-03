#line 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\src\\Sproximidad\\proximidad.cpp"
#include "proximidad.h"
// Pines a utilizar
int trigger = 8;
int echo = 9;

// Variables para la distancia
double timesecon;
long distance;
long timereturn;

void setupProximidad()
{
    // Trigger
    pinMode(trigger, OUTPUT);
    // Echo
    pinMode(echo, INPUT);
}

int distanceProx()
{
    digitalWrite(trigger, LOW);
    delay(4);
    digitalWrite(trigger, HIGH);
    delay(10);
    digitalWrite(trigger, LOW);

    timereturn = pulseIn(echo, HIGH);
    timesecon = (timereturn * 0.000001) / 2;
    distance = timesecon * 34300;

    return distance;
}