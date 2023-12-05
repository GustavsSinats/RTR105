#include <stdio.h>
#include <math.h>

double mans_asinuss(double x)
{
    double a, S;
    int k = 0;

    a = (1.) * pow(x, 2 * 0 + 1) / (pow(4, 0) * pow(1, 2) * (2 * 0 + 1));
    S = a;
    printf("%.4f\t%8.4f\t%8.4f\n", x, a, S);

    while (k < 501)
    {
        k++;
        a = a * (pow(2 * k - 1, 2) * x * x) / ((2 * k) * (2 * k + 1));
        S = S + a;
        printf("%.4f\t%8.4f\t%8.4f\n", x, a, S);
    }
    return S;
}

void main()
{
    
    int k = 0;
    long double x, y, yy,a,S;
    printf("Arcsin aprēķināšana: \n");
    printf("Ievadi savu x vērtību: ");
    scanf("%Lf",&x);
    y = asin(x);
    printf("asin (%.5Lf) = %.5Lf\n\n", x, y);

    printf("a0 = (%.4Lf) S0 = %.4Lf\n",x,x);
    
    a = (1.) * pow(x, 2 * 0 + 1) / (pow(4, 0) * pow(1, 2) * (2 * 0 + 1));
    S = a;
    while(k<501)
    {
       k++;
       a = a * (pow(2 * k - 1, 2) * x * x) / ((2 * k) * (2 * k + 1));
       S = S + a; 
       if(k==499)
       printf("a499 = %.2Le S499= %5.4Lf\n", a, S);
       if(k==500)
       printf("a500 = %.2Le S500= %5.4Lf\n", a, S);
    }
    printf("asin (%.5Lf) caur summu: %.5Lf\n",x,S);
    
    printf("          500                                     \n");
    printf("        ______                                    \n");
    printf("        \\                        2*k+1           \n");
    printf("         \\             (2*k)! * x                \n");
    printf("asin(x) = >         ______________________        \n");
    printf("         /            k      2                    \n");
    printf("        /_____       4 * (k)!  * (2*k+1)          \n");
    printf("          k=0                                 \n\n\n");

    printf("                                2   2             \n");
    printf("                         (2*k-1) * x              \n");
    printf("rekurences reizinātājs: _________________         \n");
    printf("                          (2*k)(2*k+1)            \n");
    
    /*y = asin(x);
    printf("standarta funkcija asin - y=asin(%.4f)=%.4f\n", x, y);

    yy = mans_asinuss(x);
    printf("lietotaaja funkcija - y=mans_asinuss(%.4f)=%.4f\n", x, yy);*/
}
