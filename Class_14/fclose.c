#include <stdio.h>
int main ()
{
  FILE * pFile;
  pFile = fopen ("myfile.txt","wt");
  fprintf (pFile, "fclose piemērs\n");
  fclose (pFile);
  return 0;
}
