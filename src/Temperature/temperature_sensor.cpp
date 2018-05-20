#include "temperature_sensor.h"

I2C sensorI2C(PC_1, PC_0); //PC_1=SDA, PC_0=SCL
silabs::SILABS_RHT rhtSensor(&sensorI2C);
Serial device(USBTX, USBRX);

volatile bool busChecked = false;

void respondedCallback( void ) {
    busChecked = true;
}

int main() {

    printf("Starting rhtSensor measurement\r\n");
    int retval = rhtSensor.check_availability(si7013, respondedCallback);
    printf("Available? %s\r\n", (!retval ? "SUCCESS" : "FAIL"));
 
    //    while(busChecked == false) sleep();
 
    //    busChecked = false;
    while (true) {
        retval = rhtSensor.measure(si7013, respondedCallback);
        printf("Measure? %s\r\n", (!retval ? "SUCCESS" : "FAIL"));
 
    //while(busChecked == false)  sleep();

    if(rhtSensor.get_active()) {
        printf("Temperature: %d.%03d degC\r\n", rhtSensor.get_temperature()/1000, rhtSensor.get_temperature()%1000);
        printf("Humidity: %d.%03d %\r\n", rhtSensor.get_humidity()/1000, rhtSensor.get_humidity()%1000);
    }else{
        printf("No sensor found\r\n");
    }
        wait_ms(5000);
    } 
}