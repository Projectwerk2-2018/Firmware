#pragma once
#include "sensor_data.h"
#include "stdint.h"


class SensorDataByteSerializer{

    public:
        
        
        uint8_t serialize();

        int payload_size();




    private:
        static const int PAYLOAD_SIZE = 5;
        
        SensorData sensorData;
        int temp;
        int hum;
        int pir;

};