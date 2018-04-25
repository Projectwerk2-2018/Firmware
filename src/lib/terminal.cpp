#include "terminal.h"
#include "sensor_data.h"

void Terminal::get_send()
{
  
}

void displayData(SensorData dataCluster){

    string Str = dataCluster.toString() + "\r\n";

    printf(Str.c_str());
}
