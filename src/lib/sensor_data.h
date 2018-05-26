#pragma once
using namespace std;
#include <string>

class SensorData 
{
    private:

    double temperature;
    int motion;
    double humidity;



    public:

    SensorData();
    SensorData(double inputTemperature, int iputMotion, double inputHumidity);

    double getTemperature();
    int getMotion();
    double getHumidity();
    
};