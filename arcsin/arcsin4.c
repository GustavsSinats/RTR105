#include<stdio.h>
#include<math.h>
void main (){
 long double x=0.58,y,a0,a1,a2,a3,S;
 y=asin(x);
 printf("y=asin(%.4f)=%.4f\n",x,y);
  
 a0 = (1.)*pow(x,2*0+1)/(pow(4,0)*pow(1,2)*(2*0+1));
 S = a0;
 printf("%.4f\t%8.4f\t%8.4f\n",x,a0,S);

 a1 = (1.*1*2)*pow(x,2*1+1)/(pow(4,1)*pow(1,2)*(2*1+1));
 S = S + a1;
 printf("%.4f\t%8.4f\t%8.4f\n",x,a1,S);

 a2 = (1.*1*2*3*4)*pow(x,2*2+1)/(pow(4,2)*pow(1*2,2)*(2*2+1));
 S = S + a2;
 printf("%.4f\t%8.4f\t%8.4f\n",x,a2,S);

 a3 = (1.*1*2*3*4*5*6)*pow(x,2*3+1)/(pow(4,3)*pow(1*2*3*4,2)*(2*3+1));
 S = S + a3;
 printf("%.4f\t%8.4f\t%8.4f\n",x,a3,S);

}
