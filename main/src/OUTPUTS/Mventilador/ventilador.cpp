#include "ventilador.h"

int pinVenti = A3; // Pin digital donde está conectado el botón

void setupVentilador()
{
    pinMode(pinVenti, OUTPUT); // Configurar el pin del botón como entrada
}

void ventiActivado()
{
    analogWrite(pinVenti, 255);
}