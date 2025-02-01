#include<stdio.h>
int main()
{

    char lower;
    char upper;

    printf("Enter lower letter:");
    scanf("%c",&lower);
    printf("Upper Letter:%c",lower-32);

    printf("Enter upper letter:");
    scanf("%c",&upper);
    printf("Lower Letter:%c",upper+32);

    return 0;
}
