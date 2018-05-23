#pragma once
#include "sensor_data.h"
#include "stdint.h"


class SensorDataByteSerializer{

    public:
        
        
        void serialize(SensorData dataPacket, uint8_t* payload, int maxPayload);

        int payload_size();

        
}





    private:
        static const int PAYLOAD_SIZE = 5;
        
        SensorData sensorData;
        int temp;
        int hum;
        int pir;

};