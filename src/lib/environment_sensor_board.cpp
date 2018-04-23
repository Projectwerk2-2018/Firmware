
#include "environment_sensor_board.h"



//is this include needed?
#include "sensor_data.h"


EnvironmentSensorBoard::EnvironmentSensorBoard(Transceiver inputTransceiver){
    transceiver = inputTransceiver;
}


void update(){
    double temperature;
    int motion;
    double humidity;

    
    data.setTemperature(temperature);
    data.setMotion(motion);
    data.setHumidity(humidity);

    SensorData data(temperature, motion, humidity);
    

    transceiver.send(data);
}






