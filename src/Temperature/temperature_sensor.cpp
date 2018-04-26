#include "temperature_sensor.h"
#include "SILABS_RHT.h"

Temperature::Temperature(Si7013 sensor)
{
    this-> sensor.get_temperature = temperature_value;
}

double Temperature::get_temperature_value()
{
    return temperature_value;
}
 
I2C sensorI2C(PD6, PD7); //PD6=SDA, PD7=SCL
silabs::SILABS_RHT rhtSensor(&sensorI2C);
 
volatile bool busChecked = false;
 
void respondedCallback( void ) {
    busChecked = true;
}

void measure() {
    rhtSensor.check_availability(si7021, respondedCallback);
    while(busChecked == false) sleep();
    
    busChecked = false;
    rhtSensor.measure(si7021, respondedCallback);
    while(busChecked == false) sleep();
 
    if(rhtSensor.get_active()) {
        printf("Temperature: %d.%03d degC\n", rhtSensor.get_Temperature()/1000, rhtSensor.get_Temperature()%1000);
    } else {
        printf("No sensor found\n");
    }
}