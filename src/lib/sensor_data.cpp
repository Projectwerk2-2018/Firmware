#include "sensor_data.h"
#include <iostream> 
using namespace std;

string SensorData::to_string(){
    return "Temperature: " + std::to_string(temperature) + ", \n\r"
            + "Movement: " + std::to_string(motion)+ ", \n\r"
            + "Humidity: " + std::to_string(humidity);
}  

void SensorData::setTemperature(double inputTemperature){
    temperature = inputTemperature;
}
        
void SensorData::setMotion(int inputMotion){
    motion = inputMotion;
}

void SensorData::setHumidity(double inputHumidity){
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

