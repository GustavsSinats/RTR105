#!/usr/bin/gnuplot -persist
set terminal pngcairo enhanced font "arial,10" size 800, 400
set output "stabiņu diagrammat.png"

set title "Burtu biežuma stabiņu diagramma"
set xlabel "Burts"
set ylabel "Biežums"
set style fill solid
set boxwidth 0.5

plot 'output.dat' using 1:2 with boxes notitle
