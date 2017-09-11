#include<stdio.h>
int main()
{
    int n,rem,qut,swp;
    scanf("%d",&n);
    rem=n%10;
    qut=n/10;
    swp=rem*10+qut;
    if(n<10)
    {
        printf("the number is not swp");
    }
    else
    {
        printf("%d is swp number",swp);
    }
    return 0;
}
