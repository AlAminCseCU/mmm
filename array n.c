#include<stdio.h>
int main()
{
    int ara[5]={2,3,8,5,6},i;
    for(i=0;i<5;i++)
    {
        if(i>2)
            break;
printf("%d\n",ara[i]);
    }
    return 0;
}
