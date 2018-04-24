/*#include "pir_sensor.h"

    PIRSensor::motion(PinName pin) : _interrupt(pin) {
        _interrupt.rise(this, &PIRSensor::status);
    }

    void PIRSensor::status() {
        numberOfMovements = numberOfMovements + 1;
    }

    int PIRSensor::read() {
        int tempNumberOfMovements = numberOfMovements;
        numberOfMovements = 0;
        return tempNumberOfMovements;
    }
*/