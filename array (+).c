#include<stdio.h>
int main()
{
    int a1[3]={2,3,4},a2[3]={5,6,7},i,a3[3];
    for(i=0;i<3;i++)
    {
        a3[i]=a1[i]+a2[i];
        printf("%d\n",a3[i]);
    }

}
