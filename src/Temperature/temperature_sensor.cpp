#include "temperature_sensor.h"

Temperature::Temperature() : i2c(PD6, PD7), rhtSensor(&i2c)
{
    
}

double Temperature::get_temperature_value()
{
    rhtSensor.get_Temperature()/1000,;
}