#pragma once
#include "SILABS_RHT.h"

class Humidity
{
    private:
    double humidity_value;
    I2C i2c;
    silabs::SILABS_RHT rhtSensor;

    public:
    Humidity(double humidity_value);

    public:
    double get_humidity_value();
};