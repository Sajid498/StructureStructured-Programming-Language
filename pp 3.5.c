#include<stdio.h>
#include<Math.h>
int main()
{
    int num,ans=0,result=0;
    scanf("%d",&num);

    for(int i=0; ans<=num; i++)
    {
        ans = pow(2,i);
        if(ans == num)
        {
            result = 1;
        }
    }
    if( result == 1)
        printf("Yes");
    else
        printf("No");

    return 0;

}
