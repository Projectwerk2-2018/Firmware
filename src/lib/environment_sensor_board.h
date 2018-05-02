#pragma once

#include "transceiver.h"
#include "sensor_data.h"
#include "humidity_sensor.h"
#include "temperature_sensor.h"
#include "PIR_Sensor.h"


class EnvironmentSensorBoard{

    public:

    EnvironmentSensorBoard(Transceiver * inputTransceiver);
    void update();



    private:

    Transceiver transceiver;

    // 3 sensoren

    Humidity humiditySensor;
    Temperature temperatureSensor;
    PIRSensor motionSensor;
};