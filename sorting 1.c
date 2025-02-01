#include <stdio.h>

void selection(int a[], int n)
{
    int min, minindex;
    for(int i = 0; i < n; i++)
    {
        min = a[i];
        minindex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < min)
            {
                min = a[j];
                minindex = j;
            }
        }
        if(i != minindex)
        {
            int t = a[i];
            a[i] = a[minindex];
            a[minindex] = t;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    selection(a, n);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
