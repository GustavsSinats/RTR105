#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main (void)
{
int i=0;
int gadiijuma_skaitlis, gadiijuma_skaitlju_generatora_grauds;

gadiijuma_skaitlju_generatora_grauds = time(NULL);

printf("Gadījuma skaitļu ģeneratora grauds - %d\n",gadiijuma_skaitlju_generatora_grauds);
srand(gadiijuma_skaitlju_generatora_grauds);
i=i+1;//darbības oprerācijas netiek pildītas vienlaicīgi, šeit ir 2 operācijas (saskaitīšana
      // un piešķiršana - =
      // saskaitīšana ir prioritārā - tā tiks izpildīta pirmā
      // i++; inkrements (skaitļa pieaugums par vienu vienību)(izpilda darbības un tad palielina vērtību par viens)
      // i += 1; (tas ir tas pats kas i=i+1)
      //++i; (sākumā palielina i un tad izpilda darbības)

gadiijuma_skaitlis = rand();

while(gadiijuma_skaitlis % 10)
{
printf("%d, skaitlis\n",i);
printf("Gadījuma skaitlis - %d\n",gadiijuma_skaitlis);
printf("Šis skaitlis nedalās ar 10 bez atlikuma.\n");
gadiijuma_skaitlis = rand(); //bez šīs rindiņas dabūsim bezgalīgu ciklu
i++;
}

printf("Šis skaitlis dalās ar 10 bez atlikuma.\n");
printf("Beidzot skaitlis %d. interācijā dalās ar 10 bez atlikuma.\n",i,gadiijuma_skaitlis);}
}
return 0;
}
