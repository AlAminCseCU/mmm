#include<stdio.h>
int main()
{
    int R,N,n=1,temp,suff;
    while(n>0)
    {
        scanf("%d%d",&R,&N);
        if(N==0 && R==0)
            break;
        temp=R-N;
        if(temp>(26*N))
            printf("Case %d: impossible\n",n++);
        else
            printf("%d\n",temp);
    }
}
