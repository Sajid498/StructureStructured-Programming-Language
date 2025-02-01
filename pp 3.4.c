#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a<180&&b<180&&c<180)
    {
        if(a+b+c==180)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("N0");
    }
    return 0;
}
