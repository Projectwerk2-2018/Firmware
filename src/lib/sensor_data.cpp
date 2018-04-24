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





string SensorData::toJSON(){
    return  "{\"temperature\": {\"value\":" + std::to_string(temperature) + ", \"unit\": \"°C\"}, " +
            "\"motion\": " + std::to_string(motion) + ", "
            "\"humidity\": {\"value\":" + std::to_string(humidity) + ", \"unit\": \"%\"}}" ;
}


string SensorData::toString(){
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




