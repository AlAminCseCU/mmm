#include<stdio.h>
int main()
{
    float pi,r,h,V;
    pi=3.14;
    scanf("%f%f",&r,&h);
    V=pi*r*r*h;
    printf("volume of cylinder is:%f",V);
    return 0;
}
