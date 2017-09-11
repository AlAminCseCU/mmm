#include<stdio.h>
int main()
{
    int t,a,b,i=1;
    scanf("%d",&t);
    while(i<=t)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=");
            i++;
    }
    return 0;
}
