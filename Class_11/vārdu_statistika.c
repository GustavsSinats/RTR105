#include <stdio.h>
#include <string.h>
void main()
{
 char s[200];
 int count = 1, i;
 printf("Ievadi savu teikumu\n");
 gets(s);

 {
 printf("Tavs teikums: \n");
 puts(s);
 }


 for (i = 1;i<strlen(s);i++)
 {
  if (s[i] == ' ')
  count++;
 }

 printf("Vārdu skaits tavā teikumā: %d\n", count);
}
