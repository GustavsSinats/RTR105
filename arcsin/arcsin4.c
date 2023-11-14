#include<stdio.h>
#include<math.h>
void main (){
 double x=0.58,y,a,S;
 int k=0;
 y=asin(x);
 printf("y=asin(%.4f)=%.4f\n",x,y);

 a = (1.)*pow(x,2*0+1)/(pow(4,0)*pow(1,2)*(2*0+1));
 S = a;
 printf("%.4f\t%8.4f\t%8.4f\n",x,a,S);

 while (k<3){
 k++;
 a = a * (pow(2*k-1,2)*x*x)/((2*k)*(2*k+1));
 S = S + a;
 printf("%.4f\t%8.4f\t%8.4f\n",x,a,S);
 }
}
