#include "pir_sensor/pir_sensor.h"
#include "mbed.h"
#include <iostream>

using namespace std;

Serial device(USBTX, USBRX); // tx, rx

int main(){

    PIRSensor motionDetector(D0);
    device.baud(19200);
    int numberOfMovements = motionDetector.get_number_of_movements();

    while(1){   
        device.printf("movements : %u",numberOfMovements);
        wait_ms(5000);
    }

}