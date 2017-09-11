#include<stdio.h>
int main()
{
    int t,a,b,c,i=1;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a>b&&c)&&(b>c))
        printf("Case:%d %d\n",i,b);
        else if((a>b&&c)&&(c>b))
            printf("Case:%d %d\n",i,c);
        else if((b>a&&c)&&(a>c))
            printf("Case:%d %d\n",i,a);
        else if((b>a&&c)&&(c>a))
            printf("Case:%d %d\n",i,c);
        else if((c>a&&b)&&(a>b))
            printf("Case:%d %d\n",i,a);
        else if((c>a&&b)&&(b>a))
            printf("Case:%d %d\n",i,b);
            i++;
    }
}
