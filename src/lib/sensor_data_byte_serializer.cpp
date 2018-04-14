#include "sensordatabyteserializer.h"

char SensorData::serialize(){
    
    temp = sensordata.get_temperature();
    hum = sensordata.get_humidity();
    pir = sensordata.get_motion();
    
    char payload[5] = 0;

    payload[0] = temp >> 8;
    payload[1] = temp * 0xFF;
    payload[2] = hum;
    payload[3] = pir >> 8;
    payload[4] = pir * 0xFF;


    return payload;
}

