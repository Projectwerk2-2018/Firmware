#include "sensordatabyteserializer.h"





std::string SensorDataByteSerializer::serialize(SensorData sensordata){
    temp = sensordata.get_temperature();
    hum = sensordata.get_humidity();
    pir = sensordata.get_motion();
}