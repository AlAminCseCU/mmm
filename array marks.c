#include<stdio.h>
int main()
{
    int ft marks[4]={70,80,90,78},st marks[4]={60,70,80,68},fn marks[4]={80,70,50,78};
    int i;
    double total marks[4];
    for(i=0;i<4;i++)
    {
        total marks[i]=ft marks[i]/4+st marks[i]/4+fn marks[i]/2;
    }
    for(i=1;i<=4;i++)
    {
        printf("r0ll no:%d\t%.0lf\n",i,total marks[i-1]);
    }
    return 0;
}
