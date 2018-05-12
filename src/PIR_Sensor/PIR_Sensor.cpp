#include "pir_sensor.h"
#include "mbed.h"

    PIRSensor::PIRSensor(PinName pin) : sensorInterrupt(pin) {
        sensorInterrupt.rise(callback(this, &PIRSensor::positive_edge_detected));
        sensorInterrupt.fall(callback(this, &PIRSensor::negative_edge_detected));
        set_time(1256729737);  
        this ->positiveEdge = 0;
        this ->negativeEdge = 0;
        this ->timeOn = 0;
    }

    void PIRSensor::positive_edge_detected() {
        time_t seconds = time(NULL);
        positiveEdge = seconds;
    }

    void PIRSensor::negative_edge_detected() {
        time_t seconds = time(NULL);
        negativeEdge = seconds;
    }

    void PIRSensor::calculate_time_on(){
        timeOn = negativeEdge - positiveEdge;
        negativeEdge = 0;
        positiveEdge = 0;
    }

    int PIRSensor::get_time_on(){
        int tempTimeOn = timeOn;
        timeOn = 0;
        return tempTimeOn;
    }

    int PIRSensor::get_number_of_movements() {

    }
