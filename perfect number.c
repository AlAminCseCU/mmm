#include<stdio.h>
int main()
{
    int num,i=1,sum=0;
    scanf("%d",&num);
    while(i<num)
    {
       if(num%i==0)
            sum=sum+i;
       i++;
    }
    if(sum==num)
        printf("the number is perfect");
    else
        printf("the number is not perfect");
    return 0;
}
