#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int min;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++)
    {
          min=arr[0];
        if(min>arr[i])
        {
            min=arr[i];
        }
    }

    printf("%d",min);
    return 0;
}
