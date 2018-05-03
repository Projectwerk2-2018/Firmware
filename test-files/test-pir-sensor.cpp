#include "pir_sensor/pir_sensor.h"
#include "mbed.h"
#include <iostream>

using namespace std;

Serial device(USBTX, USBRX); // tx, rx

int main(){

    PIRSensor motionDetector(D0);
    device.baud(19200);

    while(1){   
    int numberOfMovements = motionDetector.get_number_of_movements();
        device.printf("Number of movements : %i\r\n",numberOfMovements);
        wait_ms(5000);
    }

}