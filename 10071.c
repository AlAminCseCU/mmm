#include<stdio.h>
int main()
{
    int v,t,m;
    while(scanf("%d%d",&v,&t)==2)
    {
      m=2*v*t;
      if((-100<=v&&v<=100)&&(0<=t&&t<=200))
            printf("%d\n",m);
      else
        printf("input out of range");

    }
    return 0;
}
