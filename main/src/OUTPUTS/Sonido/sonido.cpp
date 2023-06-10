#include "sonido.h"

int pinSonido = A1; // Pin digital donde está conectado el botón

void setupSonido()
{
    pinMode(pinSonido, OUTPUT); // Configurar el pin del botón como entrada
}

void sonidoActivado()
{
    analogWrite(pinSonido, 255);
}