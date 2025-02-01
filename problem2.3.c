#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);

   float  x1=3.31*(a*a)+2.01*(b*b*b);
   float  x2=7.16*(b*b)+2.01*(a*a*a);

   float  X=x1/x2;
    printf("The value of X is ::%f",X);
    return 0;
}
