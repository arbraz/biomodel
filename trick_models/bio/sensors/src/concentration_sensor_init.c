/*****************************************************************************
PURPOSE: (Initialize the concentration sensor) 
*****************************************************************************/
#include <stdio.h>
#include <math.h>
#include "bio/sensors/include/concentration_sensor.h"

int concentration_sensor_init(
	       CONCENTRATION_SENSOR* CS) 
{
  CS->bias        = CS->bias;
  CS->Cm_measured = CS->Cm_measured ;
  CS->Cm_last     = CS->Cm_last;
  CS->meas_time   = CS->meas_time;
  
  return 0 ; 
}
