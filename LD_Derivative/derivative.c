#undef __STRICT_ANSI__

#include<stdio.h>
#include<math.h>

void main (){
    FILE *pFile;
   float a, b, precizitate;
    int k;

    printf("Lūdzu ievadi a vērtību: \n");
    scanf("%f",&a);
    printf("Lūdzu ievadi b vērtibu: \n");
    scanf("%f",&b);
    printf("Lūdzu ievadi cik precīzu rezultātu tu vēlies (cik ciparus aiz komata): \n");
    scanf("%f",&precizitate);
    
    
    pFile = fopen ("derivative.dat","w");
    fprintf((pFile, "asin(x)analytical'forward difference'analytical''forward difference'' \n");)
    //float y;

    int i = ((b-a)/precizitate);
   
    
    
    return 0;
}
