#include "temperature.h"
#include <iostream>

void Temperature::setTemperature(double inputTemperature){
    temperature = inputTemperature;
}

double Temperature::getTemperature(){
    return (temperature);
}