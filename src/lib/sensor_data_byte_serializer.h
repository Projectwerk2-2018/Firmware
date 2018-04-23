#pragma once
#include "sensordata.h"
#include "stdint.h"


class SensorDataByteSerializer{

    public:
        
        
        uint8_t serialize();

        int payload_size();




    private:
        SensorData sensorData;
        int temp;
        int hum;
        int pir;

        static const PAYLOAD_SIZE = 5;
};