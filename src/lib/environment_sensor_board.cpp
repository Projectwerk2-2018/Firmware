#include "environment_sensor_board.h"



EnvironmentSensorBoard::EnvironmentSensorBoard(Transceiver * inputTransceiver)
: motionSensor(D8) {
    this->transceiver = inputTransceiver;
}


void EnvironmentSensorBoard::update(){
    //double temperature = temperatureSensor.get_temperature_value();
    double temperature = 45;
    int motion = motionSensor.get_percentage_movement();
    //double humidity = humiditySensor.get_humidity_value();   
    double humidity = 67;   


    SensorData data(temperature, motion, humidity);


    transceiver->send_message(data);
}






