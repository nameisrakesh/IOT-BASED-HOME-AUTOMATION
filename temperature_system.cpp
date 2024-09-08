#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"


void init_temperature_system(void)
{
  /* Config. the pin for temp. s/m */
  pinMode(HEATER , OUTPUT);
  pinMode(COOLER , OUTPUT);
  pinMode(TEMPERATURE_SENSOR , INPUT);
    
}

/*read the temp. from temp. sensor and return the temp.*/

float read_temperature(void)
{
  float temperature;
  temperature = (((analogRead(TEMPERATURE_SENSOR) * (float) 5/1024)) /(float) 0.01);
  return temperature;
}

void cooler_control(bool control)
{
   
}
void heater_control(bool control)
{
    
}
