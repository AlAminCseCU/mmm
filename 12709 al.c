#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        int max=-9999;
        int sum1=0,sum=0;
        for(i=1;i<=n;i++)
        {
            int l,w,h;
            scanf("%d%d%d",&l,&w,&h);
            if(h>=max)
            {
                sum=l*w*h;
                if(max==h)
                {
                    if(sum>sum1)
                    {
                        sum1=sum;
                    }
                }
                if(h>max)
                {
                    max=h;
                    sum1=sum;
                }
            }
        }
        printf("%d\n",sum1);
    }
    return 0;
}
