#include "mbed.h"
#include "temperature_humidity_sensor.h"

    TemperatureHumidity::TemperatureHumidity(I2C* sensorI2C) :rhtSensor(sensorI2C){
    }

    void TemperatureHumidity::read_values() {
        if(!rhtSensor.check_availability(si7013, nullptr) &&
            !rhtSensor.measure(si7013, nullptr)){
            temperature = ((rhtSensor.get_temperature()/1000.0)+(rhtSensor.get_temperature()%1000));
            humidity = ((rhtSensor.get_humidity()/1000)+(rhtSensor.get_humidity()%1000));
        }
    }

    int TemperatureHumidity::get_temperature(){
        read_values();
        return temperature;
    }

    int TemperatureHumidity::get_humidity(){
        read_values();
        return humidity;
    }



