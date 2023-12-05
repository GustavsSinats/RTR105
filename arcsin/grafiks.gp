#!/usr/bin/gnuplot -persist
set title "Grafiks asin(x))"
set xlabel "X Ass"
set ylabel "Y Ass"
set grid

set xrange[-2:2]
set yrange[-4:4]

a0(x) = x
a1(x) = x*(((2*1-1)**2)*x*x)/((2*1)*(2*1+1))
a2(x) = ((x*x*x)/6)*(((2*2-1)**2)*x*x)/((2*2)*(2*2+1))
a3(x) = ((x*x*x*x*x)/40)*(((2*3-1)**2)*x*x)/((2*3)*(2*3+1))
s0(x) = a0(x)
s1(x) = a0(x) + a1(x)
s2(x) = a0(x) + a1(x) + a2(x)
s3(x) = a0(x) + a1(x) + a2(x) + a3(x)

plot asin(x) ,\
s0(x) ,\
s1(x) ,\
s2(x) ,\
s3(x)


set term png
set output "asin_grafiks.png"
replot
