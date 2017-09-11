#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%2==0)
        {
            count++;
            break;
        }
    }
    if(count==0 && n!=1)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    return 0;
}
