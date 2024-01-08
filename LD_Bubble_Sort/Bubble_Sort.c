#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
  char teksts[100];
  char teikums;

  printf("Ludzu ievadi teikumu, kuram velies uzzinat statistiku: ");
  gets(teksts);

  for (int i = 0; teksts[i] != '\0'; i++)
  {
    teksts[i] = tolower(teksts[i]);
  }

  // Bubble sort kārtošana
  for (int i = 0; i < strlen(teksts) - 1; i++)
  {
    for (int j = 0; j < strlen(teksts) - i - 1; j++)
    {
      if (teksts[j] > teksts[j + 1])
      {
        char pagaidu = teksts[j];
        teksts[j] = teksts[j + 1];
        teksts[j + 1] = pagaidu;
      }
    }
  }

  // sakartots teikums
  printf("Sakartots teikums: %s\n", teksts);

  // atrod minimalas un maksimalas vertibas
  char min_char, max_char;
  for (int i = 0; teksts[i] != '\0'; i++)
  {
    if (teksts[i] < min_char || i == 0)
    {
      min_char = teksts[i];
    }
    else if (teksts[i] > max_char || i == 0)
    {
      max_char = teksts[i];
    }
  }

  // Convert ASCII values to symbols
  char min_symbol = min_char;
  char max_symbol = max_char;
  /*if (isalpha(min_char))
  {
    min_symbol = (min_char + 'a' - 'A');
  }
  if (isalpha(max_char))
  {
    max_symbol = (max_char + 'a' - 'A');
  }*/

  // izprinte minimalo vertibu
  printf("Minimalais simbols: %c\n", min_symbol);

  // izprintee maksimalo vertibu
  printf("Maksimalais simbols: %c\n", max_symbol);

  // atrod videjo
  float average_value = 0.0;
  int count = 0;
  for (int i = 0; teksts[i] != '\0'; i++)
  {
    count++;
    average_value += teksts[i];
  }
  average_value /= count;

  // no ascii simboliem parvers uz burtiem
  char average_symbol = (average_value);
  if (isalpha(average_symbol))
 {
    average_symbol = (average_symbol + 'a' - 'A');
  }

  // izprinte videjo vertibu
  printf("Videjais simbols: %c\n", average_value);

  // atrod medianu
  int median_index;
  if (count % 2 == 0)
  median_index = count / 2 && count/2 +1;
  else if (count%2 == 1)
  median_index = count/2 + 1;
  char median_symbol = teksts[median_index];

  // izprinte medianu
  printf("Medianas simbols: %c\n", median_symbol);

  // parbauda vai ir viena vai vairakas modas
  char mode_symbols[100], max_count;
  int mode_symbols_count = 0;
  for (int i = 0; teksts[i] != '\0'; i++) {
    int count = 1;
    for (int j = i + 1; teksts[j] != '\0'; j++) {
      if (teksts[i] == teksts[j]) {
        count++;
      }
    }
    if (count == max_count) {
      mode_symbols[mode_symbols_count] = teksts[i];
      mode_symbols_count++;
    }
  }

  // Modas vertibas izprintee
  if (mode_symbols_count > 1) {
  //  printf("Modula simboli:");
  //  for (int i = 0; i < mode_symbols_count; i++) {
  //    printf(" %c", mode_symbols[i]);
  //  }
  //  printf("\n");
  //} else {
    printf("Modula simbols: %c\n", max_char);
  }

  return 0;
}