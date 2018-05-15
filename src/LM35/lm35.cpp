#include "lm35.h"
#include <mbed.h>

LM35::LM35()
{
    AnalogIn LM35(A0);
}

double LM35::get_temperature_value()
{  
avg=0;
for(i=0;i<10;i++)
{
    a[i]=LM35.read();
    wait(.02);
}
for(i=0;i<10;i++)
{
    avg=avg+(a[i]/10);
}    
tempC=(avg*3.685503686*100);
return tempC;
}

    
