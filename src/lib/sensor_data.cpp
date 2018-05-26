#include "sensor_data.h"
#include <iostream> 
using namespace std;
#include <string>

SensorData::SensorData(){
    temperature = 0.0;
    motion = 0;
    humidity = 0.0;
}

SensorData::SensorData(double inputTemperature, int iputMotion, double inputHumidity){
    temperature = inputTemperature;
    motion = iputMotion;
    humidity = inputHumidity;
}   

double SensorData::getTemperature(){
    return temperature;
}

int SensorData::getMotion(){
    return motion;
}

double SensorData::getHumidity(){
    return humidity;
}




