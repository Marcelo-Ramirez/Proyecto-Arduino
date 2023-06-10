#line 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\src\\INPUTS\\Stemperatura\\temperatura.h"
#ifndef TEMPERATURA_H
#define TEMPERATURA_H

#include <Arduino.h>
#include "DHTesp.h"
extern DHTesp dht;

void setupTemperatura();
int gradosTemperatura();

#endif