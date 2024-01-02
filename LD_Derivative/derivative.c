#undef __STRICT_ANSI__
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main ()
{
    FILE *pFile;
    float a, b, delta_x;
    int k;

    printf("Lūdzu ievadi a vērtību: ");
    scanf("%f",&a);
    printf("Lūdzu ievadi b vērtibu: ");
    scanf("%f",&b);
    printf("Lūdzu ievadi cik precīzu rezultātu tu vēlies (cik ciparus aiz komata): ");
    scanf("%f",&delta_x);
    
    
    pFile = fopen ("derivative.dat","w");
    fprintf(pFile, "x    asin(x) analytical'  forward difference'  analytical''  forward difference'' \n");


    int i = ((b-a)/delta_x);//vērtību skaits
    float * x;

    x[0]= a;
    for(k=1; k < i+1; k++)//x masivs
    {
        x[k] = x[k-1] + delta_x;
    }


    for (k = 0; k < i+1; k++)//funkciju kopums
    {
        func[k] =  asin(x[k]);
    }
   
    for (k = 0; k < i+1; k++)//forward difference'
    {
        der1[k] = (func[k+1] - func[k]) / delta_x;
        if (k == i) {der1[i] = 0;}
    }


   for (k = 0; k < i+1; k++)    // forward difference''
    {
        der2[k] = (der1[k+1] - der1[k]) / delta_x;
        if (k == i) {der2[i] = 0;}
        if (k == i-1) {der2[i-1] = 0;}
    }

    for (k = 0; k < i+1; k++)   //analītiskais masīvs, pirmas kartas atvasinajums
   {
        der_analytical1[k] = 1/asin(1-x*x);//seit jaieliek atvasinajums
    }

    for (k = 0; k < i+1; k++)

    {
        der_analytical2[k] = ( sin(asin(x[k])) - asin(x[k]) * cos(asin(x[k])) ) / ( 4 * x[k] * asin(x[k]) );//set jaieliek 2. kartas atvasinajums
    }



    for (k = 0; k < i+1; k++)
    {
        fprintf(pFile, "%.1f\t\t%10.5f\t\t%10.5f\t\t%10.5f\t\t%10.5f\t\t%10.5f\n", x[k], func[k], der_analytical1[k], der1[k], der_analytical2[k], der2[k]);
    }

    fclose (pFile);

    free (x);
    free (func);
    free (der1);
    free (der2);
    free (der_analytical1);
    free (der_analytical2);

    fclose (pFile);
    
    return 0;
}
