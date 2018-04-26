#pragma once
#include "SILABS_RHT.h"


class Temperature{

    private:
    double temperature_value;
    I2C i2c;
    silabs::SILABS_RHT rhtSensor;

    public:
    Temperature();

    public:
    double get_temperature_value();

    // public:
    // void set_temperature_Value(double temperature_value);
};