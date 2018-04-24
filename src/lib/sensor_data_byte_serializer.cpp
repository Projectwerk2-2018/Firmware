#include "sensor_data_byte_serializer.h"

void SensorDataByteSerializer::serialize(uint8_t* payload, int maxPayload){

    if (maxPayload >= PAYLOAD_SIZE){

        SensorData dataPacket;

        temp = dataPacket.getTemperature();
        hum = dataPacket.getHumidity();
        pir = dataPacket.getMotion();
        
        //uint8_t payload[PAYLOAD_SIZE];

        payload[0] = (uint8_t) temp >> 8;
        payload[1] = (uint8_t) temp * 0xFF;
        payload[2] = (uint8_t) hum;
        payload[3] = (uint8_t) pir >> 8;
        payload[4] = (uint8_t) pir * 0xFF;



    }


}

int SensorDataByteSerializer::payload_size(){

    return PAYLOAD_SIZE;
}

