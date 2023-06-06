#include "servo.h"

#define SERVO_PIN 9   // Pin al que está conectado el servo motor

Servo servo;  // Crear una instancia del objeto Servo

void setupServo() {
  servo.attach(SERVO_PIN);  // Adjuntar el servo al pin especificado
}

void girarServo(int grados) {
  // Girar el servo en sentido horario
  servo.write(grados);
}