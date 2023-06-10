#line 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\src\\INPUTS\\Stemperatura\\temperatura.cpp"
#include "DHTesp.h"
// SENSOR DE TEMPERATURA
#define DHTPIN 10     // Pin digital al que está conectado el sensor DHT11
#define DHTTYPE DHT11 // Tipo de sensor (DHT11 para el DHT11, DHT22 para el DHT22)

DHTesp dht;

void setupTemperatura()
{
    dht.setup(DHTPIN, DHTesp::DHT11);
}
int gradosTemperatura()
{
    float temperature = dht.getTemperature();
    return temperature;
}