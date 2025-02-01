#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    float x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
    float x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);

    printf("%f %f",x1,x2);
    return 0;
}
