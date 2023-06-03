# 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
# 2 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2
# 3 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2
# 4 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2

void setup()
{
    setupLCD();
    setupHumedad();
    setupProximidad();
    Serial.println(9600);
}

void loop()
{
    int porcenHumedad = porcentageHumedad();
 int distance = distanceProx();
    mostrarTextoLCD("Hola mundo", 0, 0);
}
