#include <stdio.h>

int main() {
  int skaitlis;
  char datuTips;

  printf("Ievadiet decimālskaitli: ");
  scanf("%d", &skaitlis);

  printf("Izvēlieties datu tipu: (c) char, (i) int, (l) long long: ");
  scanf(" %c", &datuTips);

  if (datuTips == 'c') {
    char faktors = 1;
    int i = 1;
    while (i <= skaitlis) {
      if (faktors / i < 0) {
        printf("Aprēķins ar char datu tipu nav iespējams.\n");
        return 0;
      }
      faktors = faktors * i;
      i++;
    }
    printf("Ar char datu tipu %d faktoriāls ir: %d\n", skaitlis, faktors);
  } else if (datuTips == 'i') {
    int faktors = 1;
    int i = 1;
    while (i <= skaitlis) {
      if (faktors / i < 0) {
        printf("Aprēķins ar int datu tipu nav iespējams.\n");
        return 0;
      }
      faktors = faktors * i;
      i++;
    }
    printf("Ar int datu tipu %d faktoriāls ir: %d\n", skaitlis, faktors);
  } else if (datuTips == 'l') {
    long long faktors = 1;
    int i = 1;
    while (i <= skaitlis) {
      if (faktors / i < 0) {
        printf("Aprēķins ar long long datu tipu nav iespējams.\n");
        return 0;
      }
      faktors = faktors * i;
      i++;
    }
    printf("Ar long long datu tipu %d faktoriāls ir: %lld\n", skaitlis, faktors);
  } else {
    printf("Nederīgs datu tips.\n");
  }

  return 0;
}

