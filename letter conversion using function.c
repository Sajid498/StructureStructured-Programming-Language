#include<stdio.h>
int main()
{
    char upper1,lower1,upper2,lower2;
    printf("Enter upper letter:");
    scanf("%c",&upper1);
    lower1=tolower(upper1);
    printf("%c",lower1);

   // printf("Enter lower letter:");
   // scanf("%c",&lower2);
   // upper2=toupper(lower2);
   // printf("%c",upper2);
return 0;

}
