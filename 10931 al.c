#include<stdio.h>
int main()
{
    long int num;
    int bin[1001],i,j,bit,len;
    while(scanf("%d",&num)==1)
    {
        if(num<1) break;
        len=1;
        bit=0;
        for(i=1;i<=200;i++)
        {
            bin[i]=num%2;
            if(bin[i]==1) bit++;
            num=num/2;
            if(num==0) break;
            len++;
        }
        printf("The pairty of ");
        for(j=len;j>=1;j--)
        {
            printf("%d",bin[j]);
        }
        printf(" is %d (mod 2).\n",bit);
    }
    return 0;
}
