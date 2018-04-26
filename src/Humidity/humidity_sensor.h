#pragma once
#include "SILABS_RHT.h"

class Humidity
{
    private:
    I2C i2c;
    silabs::SILABS_RHT rhtSensor;

    public:
    Humidity();

    public:
    double get_humidity_value();
};