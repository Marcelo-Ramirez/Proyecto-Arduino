# 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
# 2 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2
# 3 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2
# 4 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2
# 5 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2
# 6 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2
# 7 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2



void setup()
{
    //SENSORES
    setupTemperatura();
    setupLCD();
    setupHumedad();
    setupProximidad();
    setupPresencia();

    //MOTORES
    setupServo();


    Serial.begin(9600);
}

void loop()
{
    delay(1000);
    Serial.println(distanceProx());
}
