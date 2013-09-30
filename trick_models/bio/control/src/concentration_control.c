/*****************************************************************************
PURPOSE:    ( Control output update for chemical concentration sensor)
*****************************************************************************/

#include "bio/organs/include/organs.h"
#include "bio/sensors/include/concentration_sensor.h"
#include "bio/control/include/concentration_control.h"

int concentration_control(CONCENTRATION_CONTROL * CC, 
			  ORGANS* O,
			  CONCENTRATION_SENSOR * CS)
{
  
  double dt = 1.0;   // For now we are assuming unit time from the integrator

  CC->error_last = CC->error;
  CC->error      = O->Cm - CC->C_desired;

  CC->error_rate = CC->error - CC->error_last;

  CC->error_integral = CC->error_integral + CC->error;

  if (CC->error_integral > CC->error_integral_limit)
    CC->error_integral = CC->error_integral_limit;
  else if (CC->error_integral < (-CC->error_integral_limit))
    CC->error_integral = (-CC->error_integral_limit);

  CC->control_increment  = (-1.0) * CC->Kp * CC->error;          // proportional control component
  CC->control_increment += (-1.0) * CC->Ki * CC->error_integral; // integral control component
  CC->control_increment += (-1.0) * CC->Kd * CC->error_rate;     // derivative control component

  CC->control_command = O->params.kinj + CC->control_increment;
 
  O->params.kinj = CC->control_command;
  
  
  return 0;
}
