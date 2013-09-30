/*****************************************************************************
PURPOSE:    ( Sensor output update for chemical concentration sensor)
*****************************************************************************/

#include "bio/organs/include/organs.h"
#include "bio/sensors/include/concentration_sensor.h"

int concentration_sensor_update(CONCENTRATION_SENSOR * CS, ORGANS* O)
{
  
  /* output one time step delayed output */
  CS->Cm_measured = CS->Cm_last + CS->bias;

  /* save current true Cm for use next time */
  CS->Cm_last     = O->Cm;
  
  return 0;
}
