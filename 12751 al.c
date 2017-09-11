#include<stdio.h>
int main()
{
    int T,i,n,k,x,s,rem,c;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d",&n,&k,&x);
        s=rem=0;
        for(c=0;c<k;c++)
        {
            rem+=x;
            x++;
        }
        s=(n*(n+1))>>1;
        printf("Case %d: %d\n",i,s-rem);
    }
}
