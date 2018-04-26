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

    void setTemperature(double temperature);
    void setMotion(int motion);
    void setHumidity(double humidity);

    double getTemperature();
    int getMotion();
    double getHumidity();

    string toJSON();

    string toString();
    
};