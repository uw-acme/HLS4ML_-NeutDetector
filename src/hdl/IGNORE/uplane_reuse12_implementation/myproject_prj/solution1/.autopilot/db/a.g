#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/sayala/hls4ml-tutorial/Neutrino_Detector/Dune_1DCNN/lartpc-dune-1dcnn-main/LArTPC_Training_Notebooks/Neutrino_Trained/uplane_reuseTest/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
