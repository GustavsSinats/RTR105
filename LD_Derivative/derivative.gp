#!/usr/bin/gnuplot --persist

set terminal pngcairo enhanced font "arial,10" fontscale 1.0 size 600, 400 
set output 'derivative.png'
set yrange [-1.5:4.1]
set grid linewidth 1
set xzeroaxis linetype -1
set yzeroaxis linetype -1

plot"derivative2.dat" every ::1 using 1:2 with lines title "asin(x)", \
    "derivative2.dat" every ::1 using 1:3 with lines title "f'(x)", \
    "derivative2.dat" every ::1 using 1:5 with lines title "f''(x) (skait)", \
    #"derivative2.dat" every ::1 using 1:4 with lines title "f'(x) (skait)", \
    
    #"derivative2.dat" every ::1 using 1:7 with lines title "f''(x) (anal)"