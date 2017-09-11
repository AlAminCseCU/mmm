#include<stdio.h>
int main()
{
    int v,t,s;
    scanf("%d%d",&v,&t);
    s=2*v*t;
   if((-100<=v&&v<=100)&&(0<=t&&t<=200))
        printf("%d",s);
    else
        printf("input out of range");
}
