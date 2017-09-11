#include<stdio.h>
int main()
{
    int n1,n2,next,n,i;
    while(scanf("%d",&n)==1)
    {
       n1=0;n2=1;
       for(i=0;i<n;i++)
       {
           next=n1+n2;
           n1=n2;
           n2=next;
           printf("%d,",next);
       }
       printf("\n");
    }
}
