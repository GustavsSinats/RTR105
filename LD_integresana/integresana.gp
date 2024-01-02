
#!/usr/bin/gnuplot -persist
set terminal png
set output "integrals.png"


set xlabel "x"
set ylabel "y"


set xrange [0:1]
set yrange [0:1]


f(x) = asin(x)
plot f(x)




n = 2
h = (1-0)/n
integrāls_trapeces = 0
for (i=0; i<n; ++i) 
{ integrāls_trapeces += (h/2)*(f(i*h) + f((i+1)*h))}
plot [0:1] (0.5*integrāls_trapeces*x)


n = 2
h = (1-0)/n
integrāls_simpsona = 0
for (i=1; i<n-1; ++i) 
{integrāls_simpsona += 2.*(2. * f((2*i-1)*h) + f((2*i)*h))}
integrāls_simpsona += f(0) + f(1) + 4. * f(1-h)
integrāls_simpsona *= h/3.
plot [0:1] (integrāls_simpsona*x)
