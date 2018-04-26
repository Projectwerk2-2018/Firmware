#pragma once
#include "mbed.h"

class PIRSensor{

     public:
         PIRSensor(PinName pin);
         void isr_movement_detected();
         int get_number_of_movements();

     private:

        InterruptIn sensorInterrupt;
        int numberOfMovements;
};
