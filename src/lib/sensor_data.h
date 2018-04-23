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
    SensorData(double temperature, int motion, double humidity);

    
    string toJSON();

    string toString(); 

    void setTemperature(double temperature);
    void setMotion(int motion);
    void setHumidity(double humidity);

    double getTemperature();
    int getMotion();
    double getHumidity();
    
};