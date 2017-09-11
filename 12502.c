#include<stdio.h>
int main()
{
    int x,y,z,T,i;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d",&x,&y,&z);
        i=z*(x+(x-y))/(x+y);
        printf("%d\n",i);
    }
    return 0;
}
