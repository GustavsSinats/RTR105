#include <stdio.h>
void main()
{
  int sub(int,int); 
  int a=10,b=3;
  int rezultaats = sub(a,b);
  printf("a-b = %d",rezultats);
}
int sub(int x,int y) 
{
  return(x-y);  
}

