#pragma once

#include <string>

class SensorData 
{
    private:

    double temperature;
    int motion;
    double humidity;



    public:

    string to_string(); 

    void setTemperature(double temperature);
    void setMotion(int motion);
    void setHumidity(double humidity);

    double getTemperature();
    int getMotion();
    double getHumidity();
    
};