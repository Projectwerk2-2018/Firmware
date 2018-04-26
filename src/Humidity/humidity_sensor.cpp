#include "humidity_sensor.h"

Humidity::Humidity() :i2c(PD6, PD7), rhtSensor(&i2c)
{
}

double Humidity::get_humidity_value()
{
    rhtSensor.get_humidity();
}