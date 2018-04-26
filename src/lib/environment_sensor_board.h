#pragma once

#include "transceiver.h"
#include "sensor_data.h"
#include "humidity.h"
#include "temperature.h"


class EnvironmentSensorBoard{

    public:

    EnvironmentSensorBoard(Transceiver inputTransceiver);
    void update();



    private:

    Transceiver transceiver;

    // 3 sensoren

    Humidity humiditySensor;
    Temperature temperatureSensor;
    //MotionSensor motionSensor;       // Motion sensor bestaat nog niet
};