#include "sensor_data_byte_serializer.h"

uint8_t SensorDataByteSerializer::serialize(){

    SensorData dataPacket;

    temp = dataPacket.getTemperature();
    hum = dataPacket.getHumidity();
    pir = dataPacket.getMotion();
    
    uint8_t payload[PAYLOAD_SIZE];

    payload[0] = temp >> 8;
    payload[1] = temp * 0xFF;
    payload[2] = hum;
    payload[3] = pir >> 8;
    payload[4] = pir * 0xFF;




    return payload;
}

int SensorDataByteSerializer::payload_size(){

    return PAYLOAD_SIZE;
}

