#include<stdio.h>
int main()
{
    float l,w,r,h,b;
    printf("Enter all value");
    scanf("%f %f %f %f %f",&l,&w,&r,&h,&b);


    float tringle=0.5*r*h;
    float square=l*w;
    float circle=3.1416*r*r;

    printf("Area of Tringle:%f\n",tringle);
    printf("Area of Square:%f\n",square);
    printf("Area of circle:%f\n",circle);
    return 0;
}
