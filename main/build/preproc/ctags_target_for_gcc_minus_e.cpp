# 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
// SENSORES (INPUTS)
# 3 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2
# 4 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2
# 5 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2
# 6 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2
# 7 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2

// MOTORES (OUTPUTS)
# 10 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2
# 11 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2
# 12 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2

// PANTALLA LCD
# 15 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2

// SONIDO
# 18 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino" 2

int cont = 0;

void setup()
{

    // SENSORES
    setupTemperatura();
    setupHumedad();
    setupProximidad();
    setupPresencia();
    setupBoton();

    // MOTORES
    setupServo();
    setupAgua();
    setupVentilador();

    // PANTALLA
    setupLCD();

    // SONIDO
    setupSonido();

    Serial.begin(9600);
}

void loop()
{
    // SENSORES
    int agua = distanceProx();
    int humedad = porcentageHumedad();
    int temperatura = gradosTemperatura();
    boolean detecPresen = detecPresencia();
    boolean botonActiv = botonActivado();

    // SERVO
    int anguloActu = anguloActual();

    // MOTOR AGUA
    if (humedad < 50 && agua < 15)
    {
        // MOTOR AGUA
        aguaActivado();
    }

    if (temperatura > 30)
    {
        if (detecPresen == true && cont < 4)
        {
            cont++;
        }

        sonidoActivado();
        // MOTOR SERVO
        if (temperatura > 30 && anguloActu == 0)
        {
            // MOTOR SERVO
            moverServo0_180();
        }

        // MOTOR VENTILADOR
        if (cont == 4 && temperatura > 30)
        {
            // MOTOR VENTILADOR
            ventiActivado();
        }
    }
    else
    {
        cont = 0;
    }
}
