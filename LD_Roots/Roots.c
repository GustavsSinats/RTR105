#include<stdio.h>
#include<math.h>
int main(){
float a,b,x,delta_x,funkca,funkcb,funkcx;
int k=0;

printf("Lūdzu ievadi a vērtību:");
scanf(%f,&a);
printf("Lūdzu ievadi b vērtību:");
scanf(%f,&b);
printf("Lūdzu ievadi x vērtību:");
scanf(%f,&x);
printf("Lūdzu ievadi delta_x vērtību:");
scanf(%f,&delta_x);

funkca=asin(a);funkcb=asin(b);
if(funkca*funkcb>0){
printf(”Intervaalaa[%.2f;%.2f]sin(x)funkcijai”,a,b);
printf(”sakņu nav(vai tajā ir pāra sakņu skaits)\n”);
return1;}

printf(”sin(%7.3f)=%7.3f\t\t\t\t”,a,asin(a));
printf(”sin(%7.3f)=%7.3f\n”,b,asin(b));

while((b-a)>delta_x){
k++;//k=k+1;//k+=1;
x=(a+b)/2.;
if(funkca*asin(x)>0)//piea=0->funkca=0->reizinaajumsirpreciizi0
visulaiku->visulaika”straadaa”b=x
a=x;
else
b=x;
printf(”%2d.iteraacija:asin(%7.3f)=%7.3f\t”,k,a,asin(a));
printf(”asin(%7.3f)=%7.3f\t”,x,asin(x));
printf(”asin(%7.3f)=%7.3f\n”,b,asin(b));}

printf(”Saakneatrodaspiex=%.3f, jo asin(x)ir%.3f\n”,x,asin(x));

return0;}