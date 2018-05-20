#include "pir_sensor/pir_sensor.h"
#include "mbed.h"
#include <iostream>

using namespace std;

Serial device(USBTX, USBRX); // tx, rx

int main(){

    PIRSensor motionDetector(A0);
    device.baud(19200);
    //start
    motionDetector.start();
        
    while(1){ 

        // stop
        motionDetector.stop();
        //calculate
        device.printf("percentage: %i\r\n",motionDetector.get_percentage_movement());
        // start
        motionDetector.start();
        wait_ms(1000);
    }

}