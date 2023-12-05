#undef __STRICT_ANSI__

#include<stdio.h>
#include<math.h>

void main (){
    int a;
    int b;
    int precizitate;

    printf("Lūdzu ievadi a vērtību: \n");
    scanf("%d",&a);
    printf("Lūdzu ievadi b vērtibu: \n");
    scanf("%d",&b);
    printf("Lūdzu ievadi cik precīzu rezultātu tu vēlies (cik ciparus aiz komata): \n");
    scanf("%d",&precizitate);
    
    FILE *pFile;
    pFile = fopen ("derivative.dat","w");
    float a =("%d",a).,b=("%d",b)*M_PI,x,delta_x=1.e-2;
    //float y;

    pFile = fopen ("derivative.dat","w");
    fprintf(pFile,"\tx\t\tsin(x)\t\tsin\'(x)\n");
    
    x = a;
    while (x < b)
    {
        // y=sin(x);
        fprintf(pFile, "%10.2f\t%10.2f\t%10.2f\n", x, asin(x), (asin(x + delta_x) - asin(x)) / delta_x);
        // printf(”%10.2f\t%10.2f\n”,x,y);
        x += delta_x; // x=x+delta_x;
    }
    fclose(pFile);
    return 0;
}