#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,next,c;
    scanf("%d",&n);
    for(c=0;c<n;c++)
    {
        if(c<=1)
            next=c;
        else
        {
            next=n1+n2;
            n1=n2;
            n2=next;
        }
        printf("%d\n",next);
    }
    return 0;
}
