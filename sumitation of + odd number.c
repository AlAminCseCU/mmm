#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
        if(n<0)
            break;
    }
        printf("%d",sum);
    return 0;

}
