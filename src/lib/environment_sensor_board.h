#pragma once

#include "transceiver.h"
#include "sensor_data.h"


class EnvironmentSensorBoard{

    public:

    EnvironmentSensorBoard(Transceiver inputTransceiver);
    void update();



    private:

    Transceiver transceiver;
    // collectSensorData(SensorData* outputData);

    // 3 sensoren

    






}