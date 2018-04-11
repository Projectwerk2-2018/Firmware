#include "sensor_data.h"
#include <iostream> 
using namespace std;

std::string SensorData::to_string()
{
    return "Temperature is " + std::to_string(temperature) + ","
    + " movement is " + std::to_string(motion)+ ";"
    + " humidity is " + std::to_string(humidity);
}  