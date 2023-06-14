#include <Arduino.h>
#line 1 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
// SENSORES (INPUTS)
#include "src/INPUTS/Sproximidad/proximidad.h"
#include "src/INPUTS/Shumedad/humedad.h"
#include "src/INPUTS/Stemperatura/temperatura.h"
#include "src/INPUTS/Spresencia/presencia.h"
#include "src/INPUTS/Sboton/boton.h"

// MOTORES (OUTPUTS)
#include "src/OUTPUTS/Mservo/servoControl.h"
#include "src/OUTPUTS/Magua/agua.h"
#include "src/OUTPUTS/Mventilador/ventilador.h"

// PANTALLA LCD
#include "src/Lcd/lcd.h"

// SONIDO
#include "src/OUTPUTS/Sonido/sonido.h"

int cont = 0;

#line 21 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
void setup();
#line 49 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
void loop();
#line 21 "D:\\Mis proyectos\\C++\\Arduino\\Proyecto\\main\\main.ino"
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
    setupAnimacion();

    // SONIDO
    setupSonido();

    //Animacion
    desplazar_dino(400, "iniciando...");

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

    // LCD
    sensoresLCD(agua,humedad,temperatura);

    // MOTOR AGUA
    if (humedad < 50 && agua < 15)
    {
        // ACTIVAR AGUA
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
        if (botonActiv == true && anguloActu == 0)
        {
            // ACTIVAR SERVO 0_180
            moverServo0_180();
        }

        // MOTOR VENTILADOR
        if (cont == 4 && temperatura > 30)
        {
            // ACTIVAR VENTILADOR
            ventiActivado();
        }
    }
    else
    {
        cont = 0;
    }
    if (botonActiv == true && anguloActu == 0){
        moverServo0_180();
    }
    if (botonActiv == true && anguloActu == 180)
    {
        moverServo180_0();
    }
    
    
}

