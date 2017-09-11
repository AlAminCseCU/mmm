#include<stdio.h>
int main()
{
    int s1,s2;
    while(scanf("%d%d",&s1,&s2)==2)
    {
        printf("%d\n",s1^s2);
    }
    return 0;
}
