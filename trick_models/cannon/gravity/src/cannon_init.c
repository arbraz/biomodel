/*********************************** TRICK HEADER **************************
PURPOSE: (Initialize cannonball)
***************************************************************************/

#include <stdio.h>
#include <math.h>
#include "../include/cannon.h"

int cannon_init( 				/* RETURN: -- Always return zero */ 
	CANNON* C) 					/* INOUT: -- Cannonball structure */
{ 

	C->pos0[0] = C->pos[0];
	C->pos0[1] = C->pos[1];
	
	C->vel[0] = C->init_speed*cos(C->init_angle) ;
	C->vel[1] = C->init_speed*sin(C->init_angle) ;
	C->vel0[0] = C->vel[0];
	C->vel0[1] = C->vel[1];

	C->acc0[0] = C->acc[0];
	C->acc0[1] = C->acc[1];
	return ( 0 );
}