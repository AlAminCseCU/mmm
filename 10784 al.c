#include<stdio.h>
#include<math.h>
int main()
{
    long n,t=1,x;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        \\x=ceil(3+sqrt(9+8*n)/2);
        x=ceil(3+sqrt(9+8*n)/2);
        printf("Case %ld: %ld\n",t,x);
        t++;
    }
}
