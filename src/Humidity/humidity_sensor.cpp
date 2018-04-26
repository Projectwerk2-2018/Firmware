#include "humidity_sensor.h"

Humidity::Humidity(double humidity_value)
{
    set_humidity_value(humidity_value);
}

double Humidity::get_humidity_value()
{
    return humidity_value;
}

void Humidity::set_humidity_value(double humidity_value)
{
    this->humidity_value=humidity_value;
}