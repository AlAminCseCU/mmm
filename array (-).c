#include<stdio.h>
int main()
{
    int a1[3]={5,6,7},a2[3]={2,3,4},a3[3],i;
    for(i=0;i<3;i++)
    {
        a3[i]=a1[i]-a2[i];
        printf("%d\n",a3[i]);
    }
    return 0;
}
