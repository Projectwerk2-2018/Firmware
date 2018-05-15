#pragma once


class LM35
{
    private:
    float tempC,a[10],avg;
    int i;

    public:
    LM35();

    public:
    double get_temperature_value();
};