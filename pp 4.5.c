#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);

    if(x>y)
    {

        for(int i=x; i>=y; i--)
        {
            if(i==y)
            {
                printf("Reached!");
                break;
            }
            int ans;
            ans = pow(i,2);

            printf("%d,",ans);


        }
    }
    else
    {

        for(int i=x; i<=y; i++)
        {
            if(i==y)
            {
                printf("Reached!");
                break;
            }
           int ans;
            ans = pow(i,2);

            printf("%d,",ans);


        }
    }

        return 0;
    }
