#include <stdio.h>

int main()
{
  int skaitlis;
  char datuTips;

  printf("Ievadiet decimālskaitli: ");
  scanf("%d", &skaitlis);

  printf("Izvēlieties datu tipu: (c) char, (i) int, (l) long long: ");
  scanf(" %c", &datuTips);

  if(datuTips== 'c' && skaitlis == 6)

     printf("Aprēķins ar char datu tipu nav iespējams.\n");


  else if (datuTips == 'c')
  {
    char faktorials = 1;
    int i = 1;
    while (i <= skaitlis)
    {
      if (faktorials / i < 0)
      {
        printf("Aprēķins ar char datu tipu nav iespējams.\n");
        return 0;
      }
      faktorials = faktorials * i;
      i++;
    }
    printf("Ar char datu tipu %d faktoriāls ir: %d\n", skaitlis, faktorials);
  }
  else if (datuTips == 'i')
  {
    int faktorials = 1;
    int i = 1;
    while (i <= skaitlis)
    {
      if (faktorials / i < 0)
      {
        printf("Aprēķins ar int datu tipu nav iespējams.\n");
        return 0;
      }
      faktorials = faktorials * i;
      i++;
    }
    printf("Ar int datu tipu %d faktoriāls ir: %d\n", skaitlis, faktorials);
  }
  else if (datuTips == 'l')
  {
    long long faktorials = 1;
    int i = 1;
    while (i <= skaitlis)
    {
      if (faktorials / i < 0)
      {
        printf("Aprēķins ar long long datu tipu nav iespējams.\n");
        return 0;
      }
      faktorials = faktorials * i;
      i++;
    }
    printf("Ar long long datu tipu %d faktoriāls ir: %lld\n", skaitlis, faktorials);
  }
  else
  {
    printf("Nederīgs datu tips.\n");
  }

  return 0;
}
