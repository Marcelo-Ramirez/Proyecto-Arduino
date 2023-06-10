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
