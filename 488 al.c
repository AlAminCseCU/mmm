#include<stdio.h>
int main()
{
    int l,h,a,i,j,k,t;
    scanf("%d",&t);
    for(a=0;a<t;a++)
    {
        scanf("%d %d",&h,&l);
    }
    for(i=0;i<l;i++)
    {
        for(j=1;j<h;j++)
        {
            for(k=1;k<=j;k++)
                printf("%d",j);
            printf("\n");
        }
        for(k=h-1;j>=1;j--)
        {
            for(k=1;k<=j;k++)
                printf("%d",j);
            printf("\n");
        }if(i!=(l-1))printf("\n");
    }if(a!=(t-1))printf("\n");
}
