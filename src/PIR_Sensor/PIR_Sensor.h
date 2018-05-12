#pragma once
#include "mbed.h"

class PIRSensor{

     public:
         PIRSensor(PinName pin);
         void positive_edge_detected();
         void negative_edge_detected();
         void calculate_time_on();
         int get_time_on();
         int get_number_of_movements();

     private:

        InterruptIn sensorInterrupt;
        time_t seconds;
        time_t positiveEdge;
        time_t negativeEdge;
        time_t timeOn;
};
