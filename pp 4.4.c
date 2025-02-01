#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);
    float num;
    float sum;
    float avg;
    for(int i=0; i<n; i++)
    {
        scanf("%f",&num);
        sum=sum+num;
    }
    avg=sum/n;
    printf("%f",avg);
    return 0;
}
