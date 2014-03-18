/*********************************** TRICK HEADER **************************
PURPOSE: (My first cannon test)
***************************************************************************/

#ifndef _cannon_h_
#define _cannon_h_

typedef struct { 
	double pos0[2] ; /* *i M Init position of cannonball */ 
	double vel0[2] ; /* *i M/s Init velocity of cannonball */ 
	double acc0[2] ; /* *i M/s2 Init acceleration of cannonball */ 
	
	double pos[2] ; /* M xy-position */ 
	double vel[2] ; /* M/s xy-velocity */ 
	double acc[2] ; /* M/s2 xy-acceleration */ 
	double init_speed ; /* *i M/s Init barrel speed */ 
	double init_angle ; /* *i r Angle of cannon */
	
} CANNON ;

#endif