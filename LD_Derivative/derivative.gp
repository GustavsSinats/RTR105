#!/usr/bin/gnuplot --persist
set terminal pngcairo enhanced font "arial,10.3" fontscale 1.0 size 600, 400
set output 'derivative.png'
set grid
# Funkciju robežas
set xrange [-1.5:1.5]
set yrange [-1.5:1.5]

# Funkcijas virsraksts
set title "F(x), f'(x) un f''(x) funkcijas"

# Funkcijas ass nosaukumi
set xlabel "x"
set ylabel "y"

# Funkcijas līnijas
plot "derivative.dat" using 1:2 with lines title "f(x)" lw 2 lt rgb "blue"
plot "derivative.dat" using 1:3 with lines title "f'(x)" lw 2 lt rgb "red"
plot "derivative.dat" using 1:4 with lines title "f''(x)" lw 2 lt rgb "green"

# Izslēdz fona režģi
set grid

# Izslēdz nulles asi
set xzeroaxis linetype -1
set yzeroaxis linetype -1

# Skaidrojums
# plot "derivative.dat" using 1:2 with lines title "f(x)" lw 2 lt rgb "blue"
# Šis līnijas grafiks attēlo funkciju f(x) ar līnijas stilu "līnijas" (lines), līniju platumu 2 (lw 2) un līniju krāsu "zila" (lt rgb "blue").

# plot "derivative.dat" using 1:3 with lines title "f'(x)" lw 2 lt rgb "red"
# Šis līnijas grafiks attēlo funkciju f'(x) ar līnijas stilu "līnijas" (lines), līniju platumu 2 (lw 2) un līniju krāsu "sarkana" (lt rgb "red").

# plot "derivative.dat" using 1:4 with lines title "f''(x)" lw 2 lt rgb "green"
# Šis līnijas grafiks attēlo funkciju f''(x) ar līnijas stilu "līnijas" (lines), līniju platumu 2 (lw 2) un līniju krāsu "zaļa" (lt rgb "green").
