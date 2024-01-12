#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
    // Ievads
    char rinda[100];
    printf("Ievadiet simbolu rindu (lidz 100 simboliem): ");
    fgets(rinda, 100, stdin);

    // Minimālais
    int min = 127;
    for (int i = 0; i < strlen(rinda); i++)
    {
        if (rinda[i] < min && rinda[i] >= 65) // lielaks par 40 vajadzigs, lai neattēlotu atstarpi utt, bet tikai burtus
        {
            min = rinda[i];
        }
    }

    // Maksimālais
    int max = 0;
    for (int i = 0; i < strlen(rinda); i++)
    {
        if (rinda[i] > max)
        {
            max = rinda[i];
        }
    }
    // videja vertiba
    int sum = 0;
    int burtu_skaits = 0;
    for (int i = 0; i < strlen(rinda); i++)
    {
        if (rinda[i] >= 'a' && rinda[i] <= 'z' || rinda[i] >= 'A' && rinda[i] <= 'Z')
        {
            sum += rinda[i];
            burtu_skaits++;
        }
    }
    float vid = (float)sum / burtu_skaits;
    int burts;
    burts = vid / 1;

    // Mediāna
    int median;
    if (strlen(rinda) % 2 == 0)
    {
        median = (rinda[strlen(rinda) / 2] + rinda[strlen(rinda) / 2 - 1]) / 2;
    }
    else
    {
        median = rinda[strlen(rinda) / 2];
    }

    // Moda
    int moda[127] = {0};
    int max_moda = 0;

    for (int i = 0; i < strlen(rinda); i++)
    {
        if (isalpha(rinda[i]))
        {
            moda[(int)rinda[i]]++;
            if (moda[(int)rinda[i]] > max_moda)
            {
                max_moda = moda[(int)rinda[i]];
            }
        }
    }

    // Sakārtošana
    char sakartota_rinda[100];
    for (int i = 0; i < strlen(rinda); i++)
    {
        for (int j = 0; j < strlen(rinda) - i - 1; j++)
        {
            if (rinda[j] > rinda[j + 1])
            {
                char temp = rinda[j];
                rinda[j] = rinda[j + 1];
                rinda[j + 1] = temp;
            }
        }
    }

    // Izvade
    printf("Minimalais: %c (%d)\n", min, min);
    printf("Maksimalais: %c (%d)\n", max, max);
    printf("Videjais: %c (%.2f)\n", burts, vid);
    printf("Mediana: %c (%d)\n", median, median);
    printf("Sakartota rinda: %s\n", rinda);

    printf("Moda: ");
    int hasMode = 0;

    for (int i = 0; i < 127; i++)
    {
        if (moda[i] == max_moda && max_moda > 0)
        {
            printf("%c (%d) ", i, max_moda);
            hasMode = 1;
        }
    }

    int burtu_biezums[26] = {0};

  //saskaita cik burtu atkārtojas
  for (int i = 0; rinda[i] != '\0'; i++) {
    char burts = rinda[i];

    if (burts >= 'a' && burts <= 'z') {
      burtu_biezums[burts - 'a']++;
    } else if (burts >= 'A' && burts <= 'Z') {
      burtu_biezums[burts - 'A']++;
    }
  }

  
  FILE *pFile = fopen("grafiks.dat", "w");


  for (int i = 0; i < 26; i++) {
    if (burtu_biezums[i] != 0) {
      fprintf(pFile,"%c  %d\n", 'a' + i, burtu_biezums[i]);
    }
  }

  // aizver failu
  fclose(pFile);

    return 0;
}
