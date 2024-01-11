
#!/usr/bin/gnuplot --persist
set terminal pngcairo enhanced font "arial,10.3" fontscale 1.0 size 600, 400
set output 'integralis.png'
set xrange [-1:1]
set yrange [-pi:pi]
set title "Funkcijas asin(x) noteiktais integrālis no 0;1"
set grid
set xzeroaxis linetype -1
set yzeroaxis linetype -1
plot asin(x) with lines title "asin(x)", \
   [0:1] asin(x) with filledcurves above y1=0 title "Noteiktais integrālis" fillstyle solid 0.7, \
   
