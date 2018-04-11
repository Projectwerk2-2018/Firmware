#pragma once
#include <string>

class SensorData 
{
    private:
        double temperature;
        int motion;
        double humidity;

    public:
        std::string to_string(); 
};