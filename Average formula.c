#include<stdio.h>
int main()
{
    float a1,a2,a3,a4,a5,a6,n,A;
    n=6;
    scanf("%f%f%f%f%f%f",&a1,&a2,&a3,&a4,&a5,&a6);
    A=(a1+a2+a3+a4+a5+a6)/n;
    printf("Average is:%f",A);
    return 0;
}
