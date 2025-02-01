#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int temp=x;
    printf("%d",x+=y);

    x=temp;
    printf("%d",x-=y);

    return 0;
}
