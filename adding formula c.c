#include<stdio.h>
int main()
{
    int a,b,c,d;
    float j,k,l,m,R;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    printf("Enter the of d:");
    scanf("%d",&d);
    j=a*d;
    k=b*c;
    l=j+k;
    m=b*d;
    R=l/m;
    printf("the result is:%f",R);
    return 0;
}
