#include "sensordatabyteserializer.h"





std::string SensorDataByteSerializer::serialize(SensorData sensordata){
    temp = sensordata.get_temperature();
    hum = sensordata.get_humidity();
    pir = sensordata.get_motion();
}


/*

int SensorData::toLoraFormat(){
    int payload[5] = 0;

    payload[0] = ;
    payload[1] = ;
    payload[2] = ;
    payload[3] = ;
    payload[4] = ;


    return payload;
}

*/