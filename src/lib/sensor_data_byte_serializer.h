# pragma once
# include "sensordata.h"


class SensorDataByteSerializer{

    public:
        std::string serialize();
        
        int toLoraFormat();


    private:
        SensorData sensorData;
        int temp;
        int hum;
        int pir;
};