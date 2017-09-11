#include<stdio.h>
int main()
{
    int n,x;
    while(1)
    {
        x=0;
        scanf("%d",&n);
        if(n==0)break;
        while(n)
        {
            x=x+n/3;
            n=n/3+n%3;
            if(n==2)
            {
                x++;
            }
            if(n<3)break;
        }
        printf("%d\n",x);
    }
    return 0;

}
