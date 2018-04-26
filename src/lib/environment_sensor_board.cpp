#include "environment_sensor_board.h"

//is this include needed?
#include "sensor_data.h"


EnvironmentSensorBoard::EnvironmentSensorBoard(Transceiver inputTransceiver){
    transceiver = inputTransceiver;
}


void EnvironmentSensorBoard::update(){
    double temperature = temperatureSensor.getTemperature();
    int motion = 0;
    // int motion = motionSensor.getMotion();  // Motion sensor bestaat nog niet
    double humidity = humiditySensor.getHumidity();   

    
    // data.setTemperature(temperature);
    // data.setMotion(motion);
    // data.setHumidity(humidity);

    SensorData data(temperature, motion, humidity);


    transceiver.send(data);
}






