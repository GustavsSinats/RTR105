#include <stdio.h>
#include <math.h>

// Funkcija, kas aprēķina f(x)
double f(double x)
{
    return asin(x);
}

// Funkcija, kas aprēķina f'(x)
double f_prim(double x)
{
    return 1 / sqrt(1 - x * x);
}

// Funkcija, kas aprēķina f''(x)
double f_sec(double x)
{
    return -x / (2 * sqrt(1 - x * x) * sqrt(1 - x * x));
}

int main()
{
    double a, b, eps;
    printf("Ievadiet a vertibu: ");
    scanf("%lf", &a);

    printf("Ievadiet b vertibu: ");
    scanf("%lf", &b);

    printf("Ievadiet precizitates vertibu: ");
    scanf("%lf", &eps);

    

    // Aprēķina f(x) vērtības, x no a līdz b
    FILE *fp = fopen("derivative.dat", "w");
    fprintf(fp, "\tx\t\t f(x) funkcijas asin vertiba\n");
    for (double x = a; x <= b; x += eps)
    {
        fprintf(fp, " %lf %lf\n", x, f(x));
    }
    fprintf(fp, "\n\n");
    fclose(fp);



    // Aprēķina f'(x) vērtības, x no a līdz b (analitiskais atvasinājums)
    fp = fopen("derivative.dat", "a");
    fprintf(fp, "\tx\t f'(x) analitiskais atvasinajums\n");
    for (double x = a; x <= b; x += eps)
    {
        fprintf(fp, "%lf %lf\n", x, f_prim(x));
    }
    fprintf(fp, "\n\n");
    fclose(fp);



    // Aprēķina f'(x) vērtības, x no a līdz b (skaitliskais atvasinājums - diferencēšana un priekšu)
    fp = fopen("derivative.dat", "a");
    fprintf(fp, "\tx\t f'(x) skaitliskais atvasinājums - diferencesana uz prieksu\n");
    for (double x = a; x <= b; x += eps)
    {
        fprintf(fp, "%lf %lf\n", x, (f(x + eps) - f(x)) / eps);
    }
    fprintf(fp, "\n\n");
    fclose(fp);



    // Aprēķina f''(x) vērtības, x no a līdz b (analitiskais atvasinājums)
    fp = fopen("derivative.dat", "a");
    fprintf(fp, "\tx\t f''(x) analitiskais atvasinajums\n");
    for (double x = a; x <= b; x += eps)
    {
        fprintf(fp, "%lf %lf\n", x, f_sec(x));
    }
    fprintf(fp, "\n\n");
    fclose(fp);



    // Aprēķina f''(x) vērtības, x no a līdz b (skaitliskais atvasinājums - diferencēšana un priekšu)
    fp = fopen("derivative.dat", "a");
    fprintf(fp, "\tx\t f''(x) skaitliskais atvasinājums - diferencēšana un priekšu\n");
    for (double x = a; x <= b; x += eps)
    {
        fprintf(fp, "%lf %lf\n", x, (f(x + 2 * eps) - 2 * f(x + eps) + f(x)) / (eps * eps));
    }
    fprintf(fp, "\n\n");
    fclose(fp);



   // fp = open("derivative.dat", "a");
   // fprintf(fp," %lf %lf %lf %lf %lf", x, f(x),f_prim(x),(f(x + eps) - f(x)) / eps, f_sec(x));
   // fclose (fp);
    return 0;
}
