#include<stdio.h>
int main()
{
    unsigned long int n,s;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        s=(n*10)/9;
        if(n%9==0)
            printf("%ld %ld\n",s-1,s);
        else
            printf("%ld\n",s);
    }
    return 0;
}
