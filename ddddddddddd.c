#include<stdio.h>
int main()
{
    int x,y,a,b,t,lcm,gcd;
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    gcd=a;
    lcm=(x*y)/gcd;
    printf("Greatest common divisor of %d and %d=%d\n",x,y,gcd);
    printf("Least common multiple of %d and %d=%d\n",x,y,lcm);
    return 0;
}

