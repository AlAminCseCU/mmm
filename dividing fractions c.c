#include<stdio.h>
int main()
{
    int a,b,c,d;
    float j,k,R;
    printf("Enter the value of:a,b,c,d");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    j=a*d;
    k=b*c;
    R=j/k;
    printf("the result is:%f",R);
    return 0;
}
