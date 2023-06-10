#include "servoControl.h"
// Pines de conexión del servo motor
const int servoPin = 11;

// Variables para el control del servo
int angle = 0;
const int minAngle = 0;         // Ángulo mínimo del servo
const int maxAngle = 180;       // Ángulo máximo del servo
const int minPulseWidth = 544;  // Ancho de pulso mínimo (microsegundos)
const int maxPulseWidth = 2400; // Ancho de pulso máximo (microsegundos)

void setupServo()
{
  pinMode(servoPin, OUTPUT); // Configura el pin del servo como salida
}

int anguloActual(){
  return angle;
}

int moverServo0_180()
{
  // Mueve el servo desde el ángulo mínimo al máximo
  for (; angle <= maxAngle; angle++)
  {
    int pulseWidth = map(angle, minAngle, maxAngle, minPulseWidth, maxPulseWidth);
    analogWrite(servoPin, pulseWidth);
    delay(15); // Pequeña pausa para que el servo se mueva a la posición deseada
  }

  return 180;
}

int moverServo180_0()
{
  // Mueve el servo desde el ángulo máximo al mínimo
  for (; angle >= minAngle; angle--)
  {
    int pulseWidth = map(angle, minAngle, maxAngle, minPulseWidth, maxPulseWidth);
    analogWrite(servoPin, pulseWidth);
    delay(15); // Pequeña pausa para que el servo se mueva a la posición deseada
  }
  return 0;
}