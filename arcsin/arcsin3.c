#include<stdio.h>
#include<math.h>
void main (){
 double x=0.58,y,a,S;
 y=asin(x);
 printf("y=asin(%.2f)=%.2f\n",x,y);

 a = (1.)*pow(x,2*0+1)/(pow(4,0)*pow(1,2)*(2*0+1));
 S = a;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

 a = a * 2*x*x/(4*pow(1,2)*2);
 S = S + a;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

 a = a * 3*4*x*x/(4*pow(2,2)*2);
 S = S + a;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

 a = a * 5*6*x*x/(4*pow(3*4,2)*2);
 S = S + a;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

}
