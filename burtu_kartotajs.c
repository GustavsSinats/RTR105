#include <stdio.h>
int main()
 {
char b1;
char b2;
char b3;
char (izvele);

printf("Ar atstarpi ievadi 3 burtus: ");
scanf("%c %c %c",&b1,&b2,&b3);

printf("Lai sakartotu burtus alfabeta seciba ievadi 'a', ja preteji, ievadi 'p' ");
scanf(" %c", &izvele);

if (izvele == 'a')
 {
     if (b1<b2 && b1<b3 && b2<b3)
       {
         printf("%c, %c, %c\n",b1,b2,b3);
       }
      else if (b1<b2 && b1<b3 && b3<b2)
       {
         printf("%c %c %c\n",b1,b3,b2);
       }
         else if (b2<b1 && b2<b3 && b1<b3)
       {
         printf("%c %c %c\n",b2,b1,b3);
       }
         else if (b2<b1 && b2<b3 && b1>b3)
       {
         printf("%c %c %c\n",b2,b3,b1);
       }
         else if (b3<b1 && b3<b2 && b2>b1)
	{
         printf("%c %c %c\n",b3,b1,b2);
	}
     else
       {
        printf("%c %c %c\n",b3,b2,b1);
       }
   }

if (izvele == 'p')
 {
     if (b1<b2 && b1<b3 && b2<b3)
       {
         printf("%c, %c, %c\n",b3,b2,b1);
       }
      else if (b1<b2 && b1<b3 && b3<b2)
       {
         printf("%c %c %c\n",b2,b3,b1);
       }
         else if (b2<b1 && b2<b3 && b1<b3)
       {
         printf("%c %c %c\n",b3,b1,b2);
       }
         else if (b2<b1 && b2<b3 && b1>b3)
       {
         printf("%c %c %c\n",b1,b3,b2);
       }
         else if (b3<b1 && b3<b2 && b2>b1)
	{
         printf("%c %c %c\n",b2,b1,b3);
	}
     else
       {
        printf("%c %c %c\n",b1,b2,b3);
       }
   }

return 0;
}

