#include <stdio.h>

int main() {
  //Lietotaajam paprasa skaitli
  double skaitlis;
  printf("Ievadi decimālu skaitli: ");
  scanf("%lf", &skaitlis);

  // Lietotajam paparsa datu tipu
  char Datu_tips;
  printf("Izvēlies datu tipu ar kuru aprēķināt faktoriālu (char(c), int(i), vai long long(l)): ");
  scanf(" %c", &Datu_tips);


  // Pārbauda vai skaitlis nav negatīvs
  if (skaitlis < 0) {
    printf("Izvēlies pozitīvu skaitli.\n");
    return 1;
  }

  // rezultata mainigais
  long long rezultats = 1;

  // Rēķina faktoriālu ar while
  double vērtība = 1;
  while (vērtība <= skaitlis) {
    // pārbauda vai rezultāts nav par lielu izvēlētajam datu tipam
    if (Datu_tips == 'c' && vērtība > 255) {
      printf("Aprēķinātā vērtība pārsniedz char datu tipa robežu.\n");
      return 1;
    } else if (Datu_tips == 'i' && vērtība > 2147483648) {
      printf("Aprēķinātā vērtība pārsniedz int datu tipa robežu.\n");
      return 1;
    } else if (Datu_tips == 'l' && vērtība > 9223372036854775807) {
      printf("Aprēķinātā vērtība pārsniedz long long datu tipa robežu.\n");
      return 1;
    }

    switch (Datu_tips) {
    case 'c':
      if (rezultats > 255) {
        printf("Aprēķinātā vērtība pārsniedz char datu tipa robežu.\n");
        return 1;
      }
      rezultats *= (long long)vērtība;
      break;
    case 'i':
      if (rezultats > 32767) {
        printf("Aprēķinātā vērtība pārsniedz int datu tipa robežu.\n");
        return 1;
      }
      rezultats *= (long long)vērtība;
      break;
    case 'l':
      if (rezultats > 2147483647) {
        printf("Aprēķinātā vērtība pārsniedz long long datu tipa robežu.\n");
        return 1;
      }
      rezultats *= (long long)vērtība;
      break;
    }

    vērtība++;
  }

  // lai attlēlotu rezultatu
  switch (Datu_tips) {
  case 'c':
    printf("Faktoriāls no skaitļa %.0lf, izmantojot char datu tipu: %d\n", skaitlis, (int)rezultats);
    break;
  case 'i':
    printf("Faktoriāls no skaitļa %.0lf, izmantojot int datu tipu: %d\n", skaitlis, (int)rezultats);
    break;
  case 'l':
    printf("Faktoriāls no skaitļa %.0lf, izmantojot long long datu tipu: %lld\n", skaitlis, rezultats);
    break;
  }

  return 0;
}
