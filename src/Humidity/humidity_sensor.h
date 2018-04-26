#pragma once

class Humidity
{
    private:
    double humidity_value;

    public:
    Humidity(double humidity_value);

    public:
    double get_humidity_value();

    public:
    void set_humidity_value(double humidity_value);
};