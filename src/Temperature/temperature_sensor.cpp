#include "temperature_sensor.h"


Temperature::Temperature() : i2c(D6, D7), rhtSensor(&i2c)
{

}

double Temperature::get_temperature_value()
{
    rhtSensor.get_temperature()/1000;
}