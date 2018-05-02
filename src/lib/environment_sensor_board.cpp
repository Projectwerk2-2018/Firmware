#include "environment_sensor_board.h"



EnvironmentSensorBoard::EnvironmentSensorBoard(Transceiver * inputTransceiver){
    this->transceiver = inputTransceiver;
}


void EnvironmentSensorBoard::update(){
    double temperature = temperatureSensor.get_temperature_value();
    int motion = motionSensor.get_number_of_movements();
    double humidity = humiditySensor.get_humidity_value();   

    
    // data.setTemperature(temperature);
    // data.setMotion(motion);
    // data.setHumidity(humidity);

    SensorData data(temperature, motion, humidity);


    transceiver->send(data);
}






