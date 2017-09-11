#include<stdio.h>
int main()
{
    float b1,b2,h,A;
    scanf("%f%f%f",&b1,&b2,&h);
    A=h/2*(b1+b2);
    printf("Area of trapezoid is:%f",A);
    return 0;
}
