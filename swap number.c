#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);

  //  c=a;
   // a=b;
   // b=c;
   a=a-b;
   b=a+b;
   a=b-a;

    printf("%d\n",a);
    printf("%d",b);
    return 0;
}
