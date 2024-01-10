#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, eps;
    printf("Ludzu ievadi a vertibu: ");//sakuma x vertiba
    scanf("%f", &a);
    printf("Ludzu ievadi b vertibu: ");//beigu x vertiba
    scanf("%f", &b);
    printf("Ludzu ievadi cik precizu rezultatu tu velies: ");
    scanf("%f", &eps);//precizitate lidz kadai aprekinas integrala vertibu

    // b = M_PI / 2, eps = 1.e - 3, h, integr1 = 0., integr2;
    int k, n = 2, m = 1; 
    float h;
    float integr1 = 0, integr2;

    (integr2 = (b - a) * (asin(a) + asin(b))) / n; //(b−a)/2.∗asin(a)+(b−a)/2.∗asin(b);
    while (fabs(integr2 - integr1) > eps)
    {
        n *= 2;//n reizina ar 2 un tas klust par jauno n
        h = (b - a) / n;
        integr1 = integr2;
        integr2 = 0.;
        for (k = 0; k < n; k++)
           {integr2 += h * asin(a + (k + 0.5) * h);}//saskaita visus mazos taisnstura laukumus kopa
    }

    printf("Integrala vertiba izmantojot tainstura metodi: %.5f\n", integr2);

////////nakama metode - trapecu metode

    n = 2;
    (integr2 = (b - a) * (asin(a) + asin(b))) / n; //(b−a)/2.∗asin(a)+(b−a)/2.∗asin(b);
    while (fabs(integr2 - integr1) > eps)
    {
        n *= 2;//n reizina ar 2 un tas klust par jauno n
        h = (b - a) / n;
        integr1 = integr2;
        integr2 = 0.;
        for (k = 0; k < n; k++)
           {integr2  += (h/2)*(asin(a + (k - 1) * h) + asin(a+(k*h)));}//saskaita visus trapeču laukumus kopa
    }
    printf("Integrala vertiba izmantojot trapecu metodi: %.5f\n", integr2);
    
/////////////// Simpsonu metode


n = 0;
    (integr2 = (b - a) * (asin(a) + asin(b))) / n; //(b−a)/2.∗asin(a)+(b−a)/2.∗asin(b);
    while (fabs(integr2 - integr1) > eps)
    {
        m *= 2;//m reizina ar 2 un tas klust par jauno m
        n = 2 * m;
        h = (b - a) / n;
        integr1 = integr2;
        integr2 = 0.;
        for (k = 1; k < m-1; k++)
           integr2 = integr2 + 2.*(2. * asin(a + (2*(k-1)*h)) + asin(a+2*k*h));
           integr2 = integr2 + asin(a) + asin(b) + 4. * asin(b-h);
           integr2 *= h/3.;

    }
   printf("Integrala vertiba izmantojot simpsonu metodi: %.5f\n", integr2);
}
