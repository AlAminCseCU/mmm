#include<stdio.h>
int main()
{
    int n,h[102],i,j,sum,avg,move,set=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        set++;
        sum=0;
        move=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&h[i]);
            sum+=h[i];
        }
        avg=sum/n;
        for(j=0;j<n;j++)
        {
            if(avg<h[j]) move+=h[j]-avg;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",set,move);
    }
    return 0;
}
