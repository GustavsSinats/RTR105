#include <stdio.h>
int main ()
{
char c1; //šī ir diskrētā mainīgā deklarēšana - noteikta izmēra atmiņas apgabals
         // apgabals (char -> 1 byte) tiks sasaistīts ar noteiktu identifikatoru
         //atmiņā nav vakuums => šajā rezervētajā vai nodalītajā atmiņas apgabalā
         //būs kaut kāda 0 un 1 kombinācija, kas ir palikusi pēc kādas
         // iepriekšējas programmas
printf("c1 Mainīgā vērtība uzreiz pēc deklarēšanas (simbols): %c\n ",c1);
printf("c1 Mainīgā vērtība uzreiz pēc deklarēšanas (dec): %d\n ",c1);
printf("c1 Mainīgā vērtība uzreiz pēc deklarēšanas (hex): %#x\n ",c1);
printf("c1 Mainīgā vērtība uzreiz pēc deklarēšanas (oct): %#o\n ",c1);
printf("\n");
         // mainīgā "loma" ir - mainīties...
c1 = 0125;//visbiežāk šo izmaiņu veiksim ar NB! piešķiršanas operāciju - = -j
         //piešķiršanas operācijai ir gandrīz viszemākā prioritāte
         //tā tiek izpildīta viena no pēdējām
         //labajā pusē izrēķinātais lielums (vērtība) tiek izmitināta 
         //atmiņas apgabalā, kas ir saistīts ar kreisajā pusē pieminēto
         //identifikatoru
printf("c1 Mainīgā vērtība uzreiz pēc piešķiršanas opreācijas (simbols): %c\n ",c1);
printf("c1 Mainīgā vērtība uzreiz pēc piešķiršanas operācijas (dec): %d\n ",c1);
printf("c1 Mainīgā vērtība uzreiz pēc piešķiršanas operācijas (hex): %#x\n ",c1);
printf("c1 Mainīgā vērtība uzreiz pēc piešķiršanas operācijas (oct): %#o\n ",c1);

int birth_year = 2000; //šī ir mainīgā definēšana(atmiņas apgabala sasaistīšana
                       //ar identifikatoru un vērtības piešķiršana)
                       //mainīgo identifikatoriem, jeb vārdiem vēlams
                       //izvēlēties mnemoniskus nosaukumus - nosaukuma 
                       //vārds vai teksts atspoguļo nolūku, kuram šis mainīgais
                       //ir paredzēts
                       //identifikators nevar 
                       //                    sākties ar ciparu 
                       //                    nevar saturēt atstarpi
                       //var saturēt no [A-Z a-z] [0-0] [_]
printf("\n");
printf("c1 birth_year mainīgā vērtība (simbols): %c\n ",birth_year);
printf("c1 birth_year mainīgā vērtība (dec): %d\n ",birth_year);
printf("c1 birth_year mainīgā vērtība (hex): %#x\n ",birth_year);
printf("c1 birth_year mainīgā vērtība (oct): %#o\n ",birth_year);

int i1, i2 =0, i3 =0x13, i4 = 025;
int modified_birth_year = birth_year >> 4;

printf("\n");
printf("modified_birth_year mainīgā vērtība (simbols): %c\n ",modified_birth_year);
printf("modified_birth_year mainīgā vērtība (simbols): %d\n ",modified_birth_year);
printf("modified_birth_year mainīgā vērtība (simbols): %#x\n ",modified_birth_year);
printf("modified_birth_year mainīgā vērtība (simbols): %#o\n ",modified_birth_year);

char c = 10, cc = 127 ;
int i = -4569, ii = 126;
float f =3.e-16, ff = 0.2569 ;
double d = 4.789e39, dd = -13.56;

printf("\n");
printf("c=%d\t\t(piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",c, sizeof(c));
printf("Atrašanās vieta atmiņā - %p\n ",&c);
printf("i=%d\t(piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",i, sizeof(i));
printf("Atrašanās vieta atmiņā - %p\n ",&i);
printf("f=%.2e\t(piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",f, sizeof(f));
printf("Atrašanās vieta atmiņā - %p\n ",&f);
printf("d=%.3e\t(piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",d, sizeof(d));
printf("Atrašanās vieta atmiņā - %p\n ",&d);

printf("\n");
int *i_adrese =&i;
printf("i mainīgā adrese - %p\n",i_adrese);
int *i_adreses_kopija = i_adrese;
printf("i adreses kopija - %p\n",i_adreses_kopija);
printf("i mainīgā vērtība, izgūta pielietojot tā adresei - %d\n",*i_adrese);
printf("i mainīgā vērtība, izgūta pielietojot tā adreses kopiju - %d\n",*i_adreses_kopija);

int **i_adreses_adrese =  &i_adrese;
printf("i adreses adrese - %p\n",i_adreses_adrese);
printf("i adreses adreses izmērs baitos - %ld\n",sizeof(i_adreses_adrese));

printf("\n operācijas pētīšana:\n");
printf("char/char =? - ");
printf("%d / %d = %d (rezultāta izmērs baitos -%ld)\n ",cc,c,cc/c,sizeof(cc/c));

printf("%d * %d = %d (rezultāta izmērs baitos -%ld)\n",cc,c,cc*c,sizeof(cc*c));

printf("%d / %d = %d - %ld)\n",ii,i,i/ii,sizeof(i/ii));
return 0;
}
