#include <stdio.h>
#include <math.h>
double eps;

// Funkcija, kas aprēķina f(x)
double f(double x) {
  return asin(x);
}

// Funkcija, kas aprēķina f'(x) analitiski
double f_prim(double x) {
  return 1 / sqrt(1 - x * x);
}

// Funkcija, kas aprēķina f''(x) analitiski
double f_sec(double x) {
  return 2*x/((2*sqrt(1- x * x))*(1/sqrt(1 - x * x)*(1/sqrt(1 - x * x))));
}

// Funkcija, kas aprēķina f'(x) skaitliski ar diferenciēšanu uz priekšu
double f_prim_skait(double x) {
  return (f(x + eps) - f(x)) / eps;
}

// Funkcija, kas aprēķina f''(x) skaitliski ar diferenciēšanu uz priekšu
double f_sec_skait(double x) {
  return (f(x + eps) - 2 * f(x) + f(x - eps)) / (eps * eps);
}

int main() {

  double a, b;

  // Ievadiet a vertibu:
  printf("Ievadiet a vertibu: ");
  scanf("%lf", &a);

  // Ievadiet b vertibu:
  printf("Ievadiet b vertibu: ");
  scanf("%lf", &b);

  // Ievadiet precizitātes vertibu:
  printf("Ievadiet precizitates vertibu: ");
  scanf("%lf", &eps);

  // Atvērt failu rakstīšanai
  FILE *fp = fopen("derivative2.dat", "w");

  // Izdrukāt kolonnu nosaukumus
  fprintf(fp, "\tX\t    asin(x)     f'(x)   f'(x) (skait)  f''(x) (skait)     f''(x) (anal) \n");

  // Aprēķināt f(x) vērtības
  for (double x = a; x <= b; x += eps) {
    // Izdrukāt x vērtību ar tab palīdzību
    fprintf(fp, "%lf\t", x);

    // Izdrukāt f(x) vērtību ar tab palīdzību
    fprintf(fp, "%lf\t", f(x));

    // Izdrukāt f'(x) vērtību ar tab palīdzību
    fprintf(fp, "%lf\t", f_prim(x));

    // Izdrukāt f'(x) vērtību skaitliski ar diferenciēšanu uz priekšu ar tab palīdzību
    fprintf(fp, "%lf\t", f_prim_skait(x));

    // Izdrukāt f''(x) vērtību skaitliski ar diferenciēšanu uz priekšu ar tab palīdzību
    fprintf(fp, "%lf\t\t", f_sec_skait(x));

    // Izdrukāt f''(x) vērtību ar analītiskām diferenciāciju ar tab palīdzību
    fprintf(fp, "%lf\n", f_sec(x));
  }

  // Aizvērt failu
  fclose(fp);

  return 0;
}
