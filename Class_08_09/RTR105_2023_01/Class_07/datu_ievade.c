#include <stdio.h>

int main ()
{
  char str [80];
  int i;

  printf ("Kā tevi sauc: ");
  scanf ("%79s",str);  
  printf ("Cik tev gadu: ");
  scanf ("%d",&i);
  printf ("Tevi sauc:\n %s, tavs dzimšanas gads %d\n",str,2023-i);

  return 0;
}
