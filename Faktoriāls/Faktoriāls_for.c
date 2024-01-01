#include <stdio.h>

int main() {
  int skaitlis;
  char datuTips;

  printf("Ievadiet decimālskaitli: ");
  scanf("%d", &skaitlis);

  printf("Izvēlieties datu tipu: (c) char, (i) int, (l) long long: ");
  scanf(" %c", &datuTips);

  if (datuTips == 'c') {
    char Faktorials = 1;
    for (int i = 1; i <= skaitlis; i++) {
      if (Faktorials / i < 0) {
        printf("Aprēķins ar char datu tipu nav iespējams.\n");
        return 0;
      }
      Faktorials = Faktorials * i;
    }
    printf("Ar char datu tipu %d faktoriāls ir: %d\n", skaitlis, Faktorials);
  } else if (datuTips == 'i') {
    int Faktorials = 1;
    for (int i = 1; i <= skaitlis; i++) {
      if (Faktorials / i < 0) {
        printf("Aprēķins ar int datu tipu nav iespējams.\n");
        return 0;
      }
      Faktorials = Faktorials * i;
    }
    printf("Ar int datu tipu %d faktoriāls ir: %d\n", skaitlis, Faktorials);
  } else if (datuTips == 'l') {
    long long Faktorials = 1;
    for (long long i = 1; i <= skaitlis; i++) {
      if (Faktorials / i < 0) {
        printf("Aprēķins ar long long datu tipu nav iespējams.\n");
        return 0;
      }
      Faktorials = Faktorials * i;
    }
    printf("Ar long long datu tipu %d faktoriāls ir: %lld\n", skaitlis, Faktorials);
  } else {
    printf("Nederīgs datu tips.\n");
  }

  return 0;
}
