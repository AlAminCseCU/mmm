#include<stdio.h>
int main()
{
   int a,c,d,R,H;
    float IF;
    printf("enter the three values to add:");
    scanf("%d%d%d",&a,&c,&d);
    R=a*d;
    H=R+c;
    IF=H/d;
    printf("the value is:%f",IF);
    return 0;

}
