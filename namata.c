#include<stdio.h>
int main()
{
    int n=5,i=1,N;
    while(i<=10){
        N=n*i;
        printf("%d*%d=%d\n",n,i,N);
        ++i;
    }
    return 0;

}
