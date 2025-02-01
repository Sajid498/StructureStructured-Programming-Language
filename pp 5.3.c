#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[n]);
        if(arr[n]%2==0)
        {
            sum+=arr[n];
        }

    }
    printf("%d",sum);
    return 0;
}
