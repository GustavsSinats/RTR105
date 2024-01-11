#!/usr/bin/gnuplot --persist
set terminal pngcairo enhanced font "arial,10.3" fontscale 1.0 size 600, 400
set output 'burtu_statistika.png'
set title "Burtu izmantošanas biežums"
set xlabel "burts"
set ylabel "reizes"
set yrange [0:]
set xrange [-1:]
set boxwidth 0.7

set style fill solid 0.3  #stabiņi nedaudz caurspidigi
set style line 1 lc rgb "red" lw 2   #stabiņu krāsa

plot "grafiks.dat" using 2:xtic(1) with boxes linestyle 1 notitle
