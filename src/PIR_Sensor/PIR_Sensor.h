#pragma once
#include "motion_sensor.h"

class PIRSensor : public MotionSensor{

     public:
         virtual int get_motion(void) = 0;

     public:
         int pulseCount = 0;

};