#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float N[n];
    float sum=0;
    float avg;

    for(int i=0;i<n;i++)
    {
        scanf("%f",&N[i]);
        sum=sum+N[i];
    }
    avg=sum/n;
    printf("%f",avg);
    return 0;
}
