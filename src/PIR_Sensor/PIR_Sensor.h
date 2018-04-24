/*#pragma once
#include "mbed.h"
#include "motion_sensor.h"

class PIRSensor : public MotionSensor{

     public:
         virtual int motion(PinName pin);
         void status();
         int read();

     public:

        InterruptIn _interrupt;
        volatile int _motion;
        int numberOfMovements;

};
*/