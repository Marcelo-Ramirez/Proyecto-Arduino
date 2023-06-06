#line 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\src\\Mservo\\servo.h"
#ifndef SERVO_H
#define SERVO_H

#include <Arduino.h>
#include "Servo/src/Servo.h"

extern Servo lcd;

void setupServo();
void girarServo(int grados);

#endif
