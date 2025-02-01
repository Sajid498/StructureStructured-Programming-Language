#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float arr[n];
    float sum;
    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[n]);
        sum+=arr[n];
    }
    printf("%f",sum/n);
    return 0;
}
