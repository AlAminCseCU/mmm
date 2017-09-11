#include<stdio.h>
int main()
{
    unsigned long n,i,l;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        else
        {
            l=0;
            for(i=0;i<n;i++)
            {
                if(n%i==0)
                {
                    l+=i;
                }
            }
            if(l>n) printf("%5ld  ABUNDANT\n",n);
            else if(l<n) printf("%ld  EFICIENT\n",n);
            else printf("%5ld  PERFECT\n",n);
        }
    }
    return 0;
}
