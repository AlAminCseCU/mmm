#include<stdio.h>
int main()
{
    int a,b,c,d;
    float j,k,R;
    printf("Enter the value of:a");
    scanf("%d",&a);
    printf("Enter the value of:b");
    scanf("%d",&b);
    printf("Enter the value of:c");
    scanf("%d",&c);
    printf("Enter the value of:d");
    scanf("%d",&d);
    j=a*c;
    k=b*d;
    R=j/k;
    printf("the result is:%f",R);
    return 0;
}
