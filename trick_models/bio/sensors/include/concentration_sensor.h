/*************************************************************************
PURPOSE:      (Concentration Sensor Structure)
**************************************************************************/

#ifndef _concentration_sensor_h_
#define _concentration_sensor_h_

#include "sim_services/include/regula_falsi.h"
#include "trick_utils/comm/include/tc.h"
#include "bio/organs/include/organs.h"


typedef struct {

  double bias;        /* *io -- bias in concentration reading */

  double Cm_measured; /* *io -- measured concentration */
  double Cm_last;     /* *io -- measured concentration */
  double meas_time;   /* *io -- measurement time tag */

  /* Communication Connection */
  TCDevice connection ;  /* -- Socket connection for sending position */
} CONCENTRATION_SENSOR ;


int 
concentration_sensor_update(CONCENTRATION_SENSOR * CS, ORGANS* O);

#endif
