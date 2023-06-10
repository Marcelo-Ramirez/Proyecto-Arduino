#include "boton.h"

int pinBoton = 2; // Pin digital donde está conectado el botón

void setupBoton()
{
    pinMode(pinBoton, INPUT); // Configurar el pin del botón como entrada
}

boolean botonActivado()
{
    int estadoPin = digitalRead(pinBoton);
    if (estadoPin == HIGH)
    {
        return true;
    }
    else
    {
        return false;
    }
}