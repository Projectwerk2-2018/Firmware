#pragma once

#include "sensor_data.h"

class Transceiver
{
    
    public:

    virtual void send_message(SensorData inputData) = 0;
    
};