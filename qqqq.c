#include<stdio.h>
int main()
{
    int a1[3]={10,20,30},a2[3];
    int i,j;
    for(i=0,j=2;i<3,j>=0;i++,j--){
        a2[j]=a1[i];
    }for(j=0;j<3;j++)
    {
        printf("%d\n",a2[j]);
    }
}
