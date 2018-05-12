#include "pir_sensor/pir_sensor.h"
#include "mbed.h"
#include <iostream>

using namespace std;

Serial device(USBTX, USBRX); // tx, rx

int main(){

    PIRSensor motionDetector(A0);
    device.baud(19200);

    while(1){   
        device.printf("time on: %i\r\n",motionDetector.get_time_on());
        wait_ms(1000);
    }

}