/*************************************************************************
PURPOSE:      (Concentration Control Structure)
**************************************************************************/

#ifndef _concentration_control_h_
#define _concentration_control_h_

#include "sim_services/include/regula_falsi.h"
#include "trick_utils/comm/include/tc.h"
#include "bio/organs/include/organs.h"
#include "bio/sensors/include/concentration_sensor.h"
#include "bio/control/include/concentration_control.h"


typedef struct {

  double C_desired; /* -- desired concentration value */

  double Kp;     /* -- proportional gain */
  double Ki;     /* -- integral gains    */
  double Kd;     /* -- derivative gains  */

  double error;
  double error_integral;
  double error_rate;

  double control_increment;   /* -- change to control variable per cycle */
  double control_command;     /* -- total control command */
 
  double error_last;

  double error_integral_limit;
  double time;

} CONCENTRATION_CONTROL ;


int 
concentration_control(CONCENTRATION_CONTROL * CC, ORGANS* O, CONCENTRATION_SENSOR *CS);

#endif
