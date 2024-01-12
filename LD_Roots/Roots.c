#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, x, delta_x, funkca, funkcb, funkcx;
    int k = 0;
    
    FILE * pf;
    pf = fopen("Roots.dat", "w");

    printf("Ludzu ievadi intervala sakuma vertibu a:");
    scanf("%f", &a);
    printf("Ludzu ievadi intervala beigu vertibu b:");
    scanf("%f", &b);
    printf("Ludzu ievadi delta_x vertibu:");
    scanf("%f", &delta_x);
    printf("Ludzu milo lietotaj ievadi kadu nobidi funkcijais velies:");
    scanf("%f", &c);

   // a=(a+c);
    //b=(b+c);
    if (c >= 1.57 || c <= -1.57)
        printf("Funkcijai nav saknu, tu vispar apzienies ar kadu funkciju tu darbojies? Ej macies!\n");

    else
    {
        funkca = asin(a)+c;
        funkcb = asin(b)+c;

        if (funkca * funkcb > 0)
        {
            printf("intervala [%.2f;%.2f] asin(x) funkcijai", a, b);
            printf("saknu nav (vai taja ir para saknu skaits)\n");
            return 1;
        }

        printf("asin(%7.3f) = %7.3f\t\t\t\t", a, (asin(a)+c));
        printf("asin(%7.3f)=%7.3f\n", b, (asin(b)+c));

        while ((b - a) > delta_x)
        {
            k++; // k=k+1;//k+=1;
            x = (a + b) / 2;
            if (funkca * (asin(x)+c) > 0) // pie a=0 -> funkca =0 -> reizinaajums ir preciizi 0
            // visulaiku->visulaika;"straadaa"
            {
                a = x;
                
            }
            else
                b = x;
            printf("%2d.iteraacija:asin(%7.3f)=%7.3f\t", k, a, (asin(a)+c));
            printf("asin(%7.3f)=%7.3f\t", x, (asin(x)+c));
            printf("asin(%7.3f)=%7.3f\n", b, (asin(b)+c));
        }

        printf("Sakne atrodas pie x = %.3f, jo asin(x) ir %.3f\n", x, (asin(x)+c));
    }
   
    fprintf((pf),"x\t\t c\t\t \n %.3f\t 0 \t\t", x);
    fclose(pf);


    FILE * pFile;
    pFile = fopen("derivative.dat","w");

fprintf(pFile,"\tx\t\tsin(x)\n)");

printf("Ludzu ievadi intervala sakuma vertibu a:");
    scanf("%f", &a);
    printf("Ludzu ievadi intervala beigu vertibu b:");
    scanf("%f", &b);
    printf("Ludzu ievadi delta_x vertibu:");
    scanf("%f", &delta_x);
    printf("Ludzu milo lietotaj ievadi kadu nobidi funkcijais velies:");
    scanf("%f", &c);
    
x = a;
printf("%10.2f\t%10.2f\n",x,asin(x) + c);
while (x<b)
    {
      
        fprintf(pFile,"%10.2f\t%10.2f\n",x,asin(x) + c);
         
        x += delta_x; //x = x + delta_x
    }
fclose(pFile);
    return 0;
}