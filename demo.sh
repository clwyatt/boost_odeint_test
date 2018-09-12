#!/bin/bash
BASE=out-`date +"%Y%m%d_%H%M%S"`
DATFILE=$BASE.dat
PSFILE=$BASE.ps

./ode_int > $DATFILE

gnuplot <<- EOF
set terminal postscript
set title "Simple Linear System Response"
set style line 1 lc rgb 'blue' lt 1 lw 2 pt 7 ps 0.75 pi 5 
set output "${PSFILE}"
plot "${DATFILE}" w lp ls 1
EOF

#
