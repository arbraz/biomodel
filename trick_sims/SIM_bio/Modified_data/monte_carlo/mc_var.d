# set number of monte carlo runs to perform
NUM_RUNS: 4

master_seed = 1000;

# now tell which variables to...well...vary
VARS:

dyn.organs.Cli gaussian(seed=master_seed+1, sigma=1.0, mu=2.0);
# or if uniform dyn.organs.Cli uniform(seed=master_seed+1, min=-1.0, max=1.0);
dyn.organs.Clu        gaussian(seed=master_seed+2, sigma=1.0, mu=2.0); 
dyn.organs.Cm         gaussian(seed=master_seed+, sigma=1.0, mu=2.0);
dyn.organs.params.Pli gaussian(seed=master_seed+4, sigma=1.0, mu=2.0);
dyn.organs.params.Plu gaussian(seed=1005, sigma=1.0, mu=2.0);
dyn.organs.params.Qli gaussian(seed=1006, sigma=1.0, mu=2.0);
dyn.organs.params.Qlu gaussian(seed=1007, sigma=1.0, mu=2.0);
dyn.organs.params.Qm  gaussian(seed=1008, sigma=1.0, mu=2.0);
dyn.organs.params.Vli gaussian(seed=1009, sigma=1.0, mu=2.0);
dyn.organs.params.Vlu gaussian(seed=1010, sigma=1.0, mu=2.0);
dyn.organs.params.Vm  gaussian(seed=1011, sigma=1.0, mu=2.0);
dyn.organs.params.Vmax_p_450lu gaussian(seed=1014, sigma=1.0, mu=2.0);
dyn.organs.params.Mli    gaussian(seed=1015, sigma=1.0, mu=2.0);
dyn.organs.params.kinj gaussian(seed=1016, sigma=1.0, mu=2.0);


# Alternately you can use FILE_DATA to prescribe a sweep of parameters

# dyn.organs.Cli FILE_DATA;
# dyn.organs.CLu FILE_DATA;
# dyn.organs.Cm  FILE_DATA;

#DATA:
#1.0 1.0 1.0
#1.1 1.0 1.0
#1.0 1.1 1.0
#1.0 1.0 1.1

