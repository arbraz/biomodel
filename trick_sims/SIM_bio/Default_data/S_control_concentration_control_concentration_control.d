/*
 * This default data file was taken from:
 * /home/Alex1/trick_models/bio/control/include/concentration_control.d
 * The header file is:
 * /home/Alex1/trick_models/bio/control/include/concentration_control.h
 * The type substitution is:
 * CONCENTRATION_CONTROL -> control.concentration_control
 */


/* $Id: S_source.c auto 2014/04/08 16:43:02 Alex1 */

control.concentration_control.Kp = 0.0;     /* -- proportional gain */
control.concentration_control.Ki = 0.0;     /* -- integral gains    */
control.concentration_control.Kd = 0.0;     /* -- derivative gains  */

control.concentration_control.error = 0.0;
control.concentration_control.error_integral = 0.0;
control.concentration_control.error_rate = 0.0;

control.concentration_control.error_last = 0.0;

control.concentration_control.control_increment = 0.0;
control.concentration_control.control_command   = 0.0;

control.concentration_control.error_integral_limit = 0.0;
control.concentration_control.time = 0.0;
