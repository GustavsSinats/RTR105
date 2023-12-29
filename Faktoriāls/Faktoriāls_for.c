#include <stdio.h>

int main () {
  //Paprasa lietotaja skaitli
  double skaitlis;
  printf("Ievadi decimālu skaitli: ");
  scanf("%lf", &skaitlis);

  // paprasa datu tipu
  char datu_tips;
  printf("Izvēlies datu tipu (char (c), int(i), vai long long(l)): ");
  scanf(" %c", &datu_tips);

  // parbauda vai skaitlis nav negatīvs
  if (skaitlis < 0) {
    printf("Ievadi pozitīvu skaitli.\n");
    return 1;
  }

  // rezultata mainigais
  unsigned long long rezultats = 1;

  // Aprēķina faktoriālu ar for ciklu
  double vērtība = 1;
  for (; vērtība <= skaitlis; vērtība++) 
  
  // (unsigned long long) izmantoju, lai nerastos kļūda, ja rezultāts pārsniedz robežu
  //ja izmantotu to pašu datu tipu, vērtība var aiziet neg. skaitļos un kodā būs kļūda
  
  {
    if (datu_tips == 'c' && vērtība > (unsigned long long)255.0) {
      printf("Faktoriāla vērtība pārsniedz char datu tipa limitu.\n");
      break;
    } else if (datu_tips == 'i' && vērtība > (unsigned long long)32767.0) {
      printf("Faktoriāla vērtība pārsniedz int datu tipa limitu.\n");
      break;
    } else if (datu_tips == 'l' && vērtība > (unsigned long long)2147483647.0) {
      printf("Faktoriāla vērtība pārsniedz long long datu tipa limitu.\n");
      break;
    }

    switch (datu_tips) {
    case 'c':
      if (rezultats > (unsigned long long)255) {
        printf("Faktoriāla vērtība pārsniedz char datu tipa limitu.\n");
        break;
      }
      rezultats *= (unsigned long long)vērtība;
      break;
    case 'i':
      if (rezultats > (unsigned long long)2147483648) {
        printf("Faktoriāla vērtība pārsniedz int datu tipa limitu.\n");
        break;
      }
      rezultats *= (unsigned long long)vērtība;
      break;
    case 'l':
      if (rezultats > (unsigned long long)9223372036854775807) {
        printf("Faktoriāla vērtība pārsniedz long long datu tipa limitu.\n");
        break;
      }
      rezultats *= (unsigned long long)vērtība;
      break;
    }
  }

  // lai attēlotu faktoriāla vērtību
  switch (datu_tips) {
  case 'c':
    printf("Faktoriāla vērtība no skaitļa %.0lf, izmantojot char datu tipu: %u\n", skaitlis, (unsigned int)rezultats);
    break;
  case 'i':
    printf("Faktoriāla vērtība no skaitļa %.0lf, izmantojot int datu tipu: %u\n", skaitlis, (unsigned int)rezultats);
    break;
  case 'l':
    printf("Faktoriāla vērtība no skaitļa %.0lf, izmantojot long long datu tipu: %llu\n", skaitlis, rezultats);
    break;
  }

  return 0;
}
