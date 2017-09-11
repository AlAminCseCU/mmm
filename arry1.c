#include<stdio.h>
int main()
{
    int age[56],i,sum=0;
    for(i=0;i<56;i++)
    scanf("%d",&age[i]);
    for(i=0;i<56;i++)
    sum+=age[i];
    printf("Average=%d",sum/56);
    return 0;

}
