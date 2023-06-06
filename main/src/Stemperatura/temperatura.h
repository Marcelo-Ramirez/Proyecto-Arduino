#ifndef TEMPERATURA_H
#define TEMPERATURA_H

#include <Arduino.h>
#include "DHTesp.h"
extern DHTesp dht;

void setupTemperatura();
int gradosTemperatura();

#endif