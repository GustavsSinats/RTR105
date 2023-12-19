#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, x, delta_x, funkca, funkcb, funkcx;
    int k = 0;

    printf("Lūdzu ievadi intervāla sākuma vērtību a:");
    scanf("%f", &a);
    printf("Lūdzu ievadi intervāla beigu vērtību b:");
    scanf("%f", &b);
    printf("Lūdzu ievadi delta_x vērtību (kāda būs precizitāte):");
    scanf("%f", &delta_x);
    printf("Lūdzu mīļo lietotāj ievadi kādu nobīdi funkcijais vēlies:");
    scanf("%f", &c);

   // a=(a+c);
    //b=(b+c);
    if (c >= 1.57 || c <= -1.57)
        printf("Funkcijai nav sakņu, tu vispār apzienies ar kādu funkciju tu darbojies? Ej mācies!\n");

    else
    {
        funkca = asin(a);
        funkcb = asin(b);

        if (funkca * funkcb > 0)
        {
            printf("intervālā [%.2f;%.2f] asin(x) funkcijai", a, b);
            printf("sakņu nav (vai tajā ir pāra sakņu skaits)\n");
            return 1;
        }

        printf("asin(%7.3f) = %7.3f\t\t\t\t", a, (asin(a)+c));
        printf("asin(%7.3f)=%7.3f\n", b, (asin(b)+c));

        while ((b - a) > delta_x)
        {
            k++; // k=k+1;//k+=1;
            x = (a + b) / 2;
            if (funkca * asin(x) > 0) // pie a=0 -> funkca =0 -> reizinaajums ir preciizi 0
            // visulaiku->visulaika;"straadaa"
            {
                b = x;
                a = x;
            }
            else
                b = x;
            printf("%2d.iteraacija:asin(%7.3f)=%7.3f\t", k, a, (asin(a)+c));
            printf("asin(%7.3f)=%7.3f\t", x, asin(x));
            printf("asin(%7.3f)=%7.3f\n", b, (asin(b)+c));
        }

        printf("Sakne atrodas pie x=%.3f, jo asin(x) ir %.3f\n", x, asin(x));
    }
    return 0;
}