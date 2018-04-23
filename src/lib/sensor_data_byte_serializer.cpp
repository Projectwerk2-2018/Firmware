#include "sensordatabyteserializer.h"

uint8_t SansorDataByteSerializer::serialize(){
    
    temp = sensordata.get_temperature();
    hum = sensordata.get_humidity();
    pir = sensordata.get_motion();
    
    uint8_t payload[PAYLOAD_SIZE] = 0;

    payload[0] = temp >> 8;
    payload[1] = temp * 0xFF;
    payload[2] = hum;
    payload[3] = pir >> 8;
    payload[4] = pir * 0xFF;




    return payload;
}

int SansorDataByteSerializer::payload_size(){

    return PAYLOAD_SIZE;
}

