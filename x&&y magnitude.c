#include<stdio.h>
int main()
{
    int a1,a2,b1,b2,x,y,c1,c2;
    scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
    x=(b2*c1-b1*c2)/(a1*b2-a2*b1);
    y=(a1*c2-a2*c1)/(a1*b2-a2*b1);
    printf("x=%d\ny=%d",x,y);
}
