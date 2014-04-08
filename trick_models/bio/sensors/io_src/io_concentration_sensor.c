
/****************************************************************************
*                                                                           *
* Trick Simulation Environment Software                                     *
*                                                                           *
* Copyright (c) 1996,1997 LinCom Corporation, Houston, TX                   *
* All rights reserved.                                                      *
*                                                                           *
* Copyrighted by LinCom Corporation and proprietary to it. Any unauthorized *
* use of Trick Software including source code, object code or executables is*
* strictly prohibited and LinCom assumes no liability for such actions or   *
* results thereof.                                                          *
*                                                                           *
* Trick Software has been developed under NASA Government Contracts and     *
* access to it may be granted for Government work by the following contact: *
*                                                                           *
* Contact: Charles Gott, Branch Chief                                       *
*          Simulation and Graphics Branch                                   *
*          Automation, Robotics, & Simulation Division                      *
*          NASA, Johnson Space Center, Houston, TX                          *
*                                                                           *
****************************************************************************/

/*
 * This file was automatically generated by the ICG based on the file:
 * bio/sensors/include/concentration_sensor.h
 * This file contains database parameter declarations specific to the
 * data structures and enumerated types declared in the above file.
 * These database parameters are used by the Trick input and
 * data recording processors to gain access to important simulation
 * variable information.
 *
 * Auto Code Generator Programmer:
 *    Rob Bailey  Sweet Systems Inc  12/97
 *    Alex Lin    NASA               03/01
 */
#define TRICK_IN_IOSRC

#if __GNUC__ == 2
    #define ADDRESS_OFFSET 1
#else
    #define ADDRESS_OFFSET 0 
#endif

#include <stdlib.h>
#include <stddef.h>
#include "sim_services/include/parameter_types.h"
#include "sim_services/include/exec_proto.h"
#include "trick_utils/trick_adt/include/avl.h"

extern struct avl_table *equiv_attributes ;

#include "bio/sensors/include/concentration_sensor.h"


extern ATTRIBUTES attrTCDevice[] ;

#ifdef __cplusplus
    extern "C" {
#endif
void init_attrTCDevice(void) ;

#ifdef __cplusplus
    }
#endif

void init_attrCONCENTRATION_SENSOR(void);

ATTRIBUTES attrCONCENTRATION_SENSOR[] = {
{ "bias", "double", "--", "", "",
  "bias in concentration reading",
  3,TRICK_DOUBLE,sizeof(double),0,0,Language_C,0x0,
  0,(char*)0, 0,{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } ,
{ "Cm_measured", "double", "--", "", "",
  "measured concentration",
  3,TRICK_DOUBLE,sizeof(double),0,0,Language_C,0x0,
  0,(char*)0, 0,{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } ,
{ "Cm_last", "double", "--", "", "",
  "measured concentration",
  3,TRICK_DOUBLE,sizeof(double),0,0,Language_C,0x0,
  0,(char*)0, 0,{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } ,
{ "meas_time", "double", "--", "", "",
  "measurement time tag",
  3,TRICK_DOUBLE,sizeof(double),0,0,Language_C,0x0,
  0,(char*)0, 0,{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } ,
{ "connection", "TCDevice", "--", "", "",
  "Socket connection for sending position",
  3,TRICK_STRUCTURED,sizeof(TCDevice),0,0,Language_C,0x0,
  0,(char*)attrTCDevice, 0,{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } ,
{ "","","","","","",
  0,0,0,0,0,Language_C,0,0,0,
  0,{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}} } };

void init_attrCONCENTRATION_SENSOR(void) {


        EQUIV_ATTRIBUTES * equiv;
        ATTRIBUTES* last_non_bf;
        int i = 0;
        static int initialized_1337 ;

        if ( initialized_1337 ) {
                return ;
        }
        initialized_1337 = 1 ;

        last_non_bf = NULL ;
        attrCONCENTRATION_SENSOR[i++].offset = offsetof(CONCENTRATION_SENSOR,bias) ;
        attrCONCENTRATION_SENSOR[i++].offset = offsetof(CONCENTRATION_SENSOR,Cm_measured) ;
        attrCONCENTRATION_SENSOR[i++].offset = offsetof(CONCENTRATION_SENSOR,Cm_last) ;
        attrCONCENTRATION_SENSOR[i++].offset = offsetof(CONCENTRATION_SENSOR,meas_time) ;
        attrCONCENTRATION_SENSOR[i++].offset = offsetof(CONCENTRATION_SENSOR,connection) ;

        equiv = (EQUIV_ATTRIBUTES*) malloc(sizeof(EQUIV_ATTRIBUTES));
        equiv->attr = attrCONCENTRATION_SENSOR ;
        equiv->base = attrCONCENTRATION_SENSOR ;
        avl_insert(equiv_attributes , (void *)equiv) ;

        init_attrTCDevice() ;
}

