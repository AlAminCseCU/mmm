#include<stdio.h>
int main()
{
    int x,i=1;
    while(1){
        scanf("%d",&x);
        if(x==0)
            break;
        printf("Case %d: %d\n",i,x/2);
        i++;
    }
    return 0;
}