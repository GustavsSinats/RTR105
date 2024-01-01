#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, eps;
    printf("Lūdzu ievadi a vērtību: ");
    scanf("%f",&a);
    printf("Lūdzu ievadi b vērtibu: ");
    scanf("%f",&b);
    printf("Lūdzu ievadi cik precīzu rezultātu tu vēlies (cik taisnstūros sadalīt funkciju): ");
    scanf("%f",&eps);

     //b = M_PI / 2, eps = 1.e - 3, h, integr1 = 0., integr2;
    int k, n = 2;
    int h;
    int integr1, integr2;
    
    (integr2 = (b - a) * (asin(a) + asin(b)))/ n; //(b−a)/2.∗asin(a)+(b−a)/2.∗asin(b);
    while (fabs(integr2 - integr1) > eps)
    {
        n *= 2;
        h = (b - a) / n;
        integr1 = integr2;
        integr2 = 0.;
        for (k = 0; k < n; k++)
            integr2 += h * asin(a + (k + 0.5) * h);
    }
  
    printf("Integrala vertiba : % .2d\n",integr2);
}