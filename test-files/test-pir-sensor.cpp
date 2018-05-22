#include "pir_sensor/pir_sensor.h"
#include "TemperatureHumidity/temperature_humidity_sensor.h"
#include "mbed.h"
#include <iostream>

using namespace std;

Serial device(USBTX, USBRX); // tx, rx

int main(){

    I2C sensorI2C(PC_1, PC_0);
    PIRSensor motionDetector(A0);
    TemperatureHumidity tempsensor(&sensorI2C);
    device.baud(19200);
    //start
    motionDetector.start();
        
    while(1){ 

        // stop
        motionDetector.stop();
        //calculate
        device.printf("percentage: %i\r\n",motionDetector.get_percentage_movement());
        device.printf("temperature: %i\r\n",tempsensor.get_temperature());
        device.printf("humidity: %i\r\n",tempsensor.get_humidity());
        // start
        motionDetector.start();
        wait_ms(1000);
    }

}