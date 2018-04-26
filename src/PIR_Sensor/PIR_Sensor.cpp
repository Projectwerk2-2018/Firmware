#include "PIR_Sensor.h"
#include "mbed.h"

    PIRSensor::PIRSensor(PinName pin) : sensorInterrupt(pin) {
        sensorInterrupt.rise(callback(this, &PIRSensor::isr_movement_detected));
    }

    void PIRSensor::isr_movement_detected() {
        numberOfMovements = numberOfMovements + 1;
    }

    int PIRSensor::get_number_of_movements() {
        int tempNumberOfMovements = numberOfMovements;
        numberOfMovements = 0;
        return tempNumberOfMovements;
    }
