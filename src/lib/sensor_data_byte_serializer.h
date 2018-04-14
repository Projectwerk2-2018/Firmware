# pragma once
# include "sensordata.h"


class SensorDataByteSerializer{

    public:
        
        
        int serialize();


    private:
        SensorData sensorData;
        int temp;
        int hum;
        int pir;
};