#include "agua.h"

int pinAgua = A2; // Pin digital donde está conectado el botón

void setupAgua()
{
    pinMode(pinAgua, OUTPUT); // Configurar el pin del botón como entrada
}

void aguaActivado()
{
    analogWrite(pinAgua, 255);
}