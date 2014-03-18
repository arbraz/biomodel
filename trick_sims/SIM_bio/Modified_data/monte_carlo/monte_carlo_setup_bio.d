 /* This file is to serve as an example usage of the Trick Monte Carlo capability */

/* Turns on Monte Carlo analysis and points to a specific data input file */
sys.exec.monte.in.activate = Yes ;
sys.exec.monte.in.input_files = alloc(2);
sys.exec.monte.in.input_files[0] = "Modified_data/monte_carlo/mc_var.d" ;
sys.exec.monte.in.timeout = 80.0;  // set this to a reasonable time to kill a "hung" sim

/* Turn off trapping of floating point exceptions */
sys.exec.in.trap_sigfpe = No;

#define TRICK_USER_REMOTE_SH

/* Defines parameters for which machines to use with a distributed simulation */
int ii = 0 ;
#define MAX_NUM_MACHINES 5
sys.exec.monte.in.slaves = alloc(MAX_NUM_MACHINES);
sys.exec.monte.in.slaves[ii++].machine_name = "localhost" ;
//sys.exec.monte.in.slaves[ii++].machine_name = "spider" ;
//sys.exec.monte.in.slaves[ii++].machine_name = "gumdrop" ;
//sys.exec.monte.in.slaves[ii++].machine_name = "orion" ;


/* CRITICAL for ARES functionality tells Trick to use user defined remote shell command defined further below */
/* int jj = 0 ;
sys.exec.monte.in.slaves[jj++].remote_shell = 2;
//sys.exec.monte.in.slaves[jj++].remote_shell = 2;
//sys.exec.monte.in.slaves[jj++].remote_shell = 2;*/

/* CRITICAL for ARES functionality tells Trick to use specific script which works for ClearCase views */
/* int kk = 0 ;
sys.exec.monte.in.slaves[kk++].user_remote_shell = "/usr/local/scripts/ctremote -ssh -fg -n --";
//sys.exec.monte.in.slaves[kk++].user_remote_shell = "/usr/local/scripts/ctremote -ssh -fg -n --";
//sys.exec.monte.in.slaves[kk++].user_remote_shell = "/usr/local/scripts/ctremote -ssh -fg -n --";
//sys.exec.monte.in.slaves[kk++].user_remote_shell = "/usr/local/scripts/ctremote -ssh -fg -n --"; */

/* By default, monte carlo is fairly verbose. If you need to quieten 
the messages from a monte carlo run: */
sys.exec.sim_com.quiet = No ;

