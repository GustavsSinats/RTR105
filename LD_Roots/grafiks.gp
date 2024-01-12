#!/usr/bin/gnuplot --persist
set title "Funkcija asin(x)+c"
set xlabel "X Ass"
set ylabel "Y Ass"
set grid

set xrange[-1:1]
set yrange[-pi:pi]
set style line 2 lc rgb 'black' 

plot "derivative.dat" every ::1 using 1:2 with lines title "Atvasinajums asin(x)+c",\
 "Roots.dat" every ::1 using 1:2 with points title "Sakne"




set term png
set output "grafiks.png"


