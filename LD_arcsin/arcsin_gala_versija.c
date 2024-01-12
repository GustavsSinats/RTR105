#include <stdio.h>
#include <math.h>

double mans_asinuss(double x)
{
    long double a;
    double S;
    int k = 0;

    a = (1.) * pow(x, 2 * 0 + 1) / (pow(4, 0) * pow(1, 2) * (2 * 0 + 1));
    S = a;
    printf("a0 %8.4f\t S0%8.4f\n", a, S);

    while (k <= 500)
    {
        k++;
        a = a * (pow(2 * k - 1, 2) * x * x) / ((2 * k) * (2 * k + 1));
        S = S + a;
        if (k == 499)
        {
            printf("a499 = %.2Le S499 = %.2f \n", a, S);
        }
        if (k == 500)
        {
            printf("a500 = %.2Le S500 = %.2f \n", a, S);
        }
    }
    printf("asin (%.2Lf) caur summu: %.5Lf\n",x,S);
  
    
    return S;
   }
   void main()
{
    

    double x, y, yy;
    printf("Arcsin aprekinasana: \n");
    printf("Ievadi savu x vertibu: ");
    scanf("%lf",&x);

    printf("              500                                     \n");
    printf("             ______                                   \n");
    printf("            \\                        2*k+1           \n");
    printf("             \\             (2*k)! * x                \n");
    printf("asin(%.2f) =  >         ______________________        \n",x);
    printf("             /            k      2                    \n");
    printf("            /_____       4 * (k)!  * (2*k+1)          \n");
    printf("              k=0                                 \n\n\n");

    printf("                                2   2             \n");
    printf("                         (2*k-1) * x              \n");
    printf("references reizinātājs: _________________         \n");
    printf("                          (2*k)(2*k+1)            \n");
    
    y = asin(x);
    printf("standarta funkcija asin - y=asin(%.4f)=%.4f\n", x, y);

    yy = mans_asinuss(x);
    printf("lietotaaja funkcija - y=mans_asinuss(%.4f)=%.4f\n", x, yy);
}
