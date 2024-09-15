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


// To turn ON & OFF the cooler
void cooler_control(bool control)
{
   if(control)
   {
    digitalWrite(COOLER , HIGH);
   }
   else
   {
    digitalWrite(COOLER , LOW);
   }
}
void heater_control(bool control)
{

  if(control)
   {
    digitalWrite(HEATER , HIGH);
   }
   else
   {
    digitalWrite(HEATER , LOW);
   }  
}
