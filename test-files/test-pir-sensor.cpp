#include "pir_sensor/pir_sensor.h"
#include "mbed.h"
#include <iostream>

using namespace std;

Serial device(USBTX, USBRX); // tx, rx

int main(){

    PIRSensor motionDetector(A0);
    device.baud(19200);

    while(1){ 

        motionDetector.calculate_time_on();  
        device.printf("positive edge: %i\r\n",motionDetector.get_positive_edge());
        device.printf("negative edge: %i\r\n",motionDetector.get_negative_edge());
        device.printf("time on: %i\r\n",motionDetector.get_time_on());
        wait_ms(1000);
    }

}