/*****************************************************************************
PURPOSE: (Initialize the concentration controller) 
*****************************************************************************/
#include <stdio.h>
#include <math.h>
#include "bio/control/include/concentration_control.h"

int concentration_control_init(
	       CONCENTRATION_CONTROL* CC) 
{
  CC->Kp = CC->Kp;
  CC->Ki = CC->Ki;
  CC->Kd = CC->Kd;

  CC->error = CC->error;
  CC->error_last = CC->error_last;
  CC->error_integral = CC->error_integral;
  CC->error_rate = CC->error_rate;
  
  CC->control_increment = CC->control_increment;
  CC->control_command = CC->control_command;
  

  CC->error_integral_limit = CC->error_integral_limit;
  CC->time = CC->time;
  
  return 0 ; 
}
