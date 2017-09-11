#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N=0;
    long x=0;
    scanf("%d",&N);
    while(N--){
        scanf("%ld",&x);
        if(x%2!=0)
        {
            x--;
        }
        printf("%ld\n",x/2);
    }
    return 0;
}
