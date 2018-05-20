#include "pir_sensor.h"
#include "mbed.h"

    PIRSensor::PIRSensor(PinName pin) : sensorInterrupt(pin) {
        sensorInterrupt.rise(callback(this, &PIRSensor::positive_edge_detected));
        sensorInterrupt.fall(callback(this, &PIRSensor::negative_edge_detected));
        this->state = LOW;
    }

    void PIRSensor::start(){
        lowtime = 0;
        hightime = 0;
        timer.reset();
        timer.start();
    }

    void PIRSensor::stop(){
        timer.stop();
        if (state==LOW){
            int deltaT = get_delta();
            lowtime += deltaT;
        }else{
            int deltaT = get_delta();
            hightime += deltaT;
        }
    }

<<<<<<< HEAD
    void PIRSensor::calculate_time_on(){
        timeOn = negativeEdge - positiveEdge;
        negativeEdge = 0;
        positiveEdge = 0;
    }

    void PIRSensor::calculate_total_time_on(){
        totalTimeOn = totalTimeOn + timeOn;
        timeOn = 0;
        percentageTimeOn = totalTimeOn/2000;
=======
    void PIRSensor::positive_edge_detected() {
        state = HIGH;
        int deltaT = get_delta();
        lowtime += deltaT;
>>>>>>> 76ec7596ea025adca667343c194da534c84a5747
    }

    void PIRSensor::negative_edge_detected() {
        state = LOW;
        int deltaT = get_delta();
        hightime += deltaT;
    }
    
    int PIRSensor::get_percentage_movement(){
        int percentage = (1.0*hightime/(hightime+lowtime))*100;
        return percentage;
    }
        
    int PIRSensor::get_delta(){
        int deltaT = timer.read_ms() - lowtime - hightime;
        return deltaT;
    }

