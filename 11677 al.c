#include<stdio.h>
int main()
{
    int h1,h2,m1,m2;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        int sum=0;
        if(m1>m2)
        {
            m2+=60;
            h2--;
        }
        sum=m2-m1;
        if(h1>h2){
            h2+=24;
        }
        sum+=60*(h2-h1);
        printf("%d\n",sum);
    }
    return 0;
}
