#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,E,F;
    scanf("%f%f%f",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    E=(-b+d)/2*a;
    F=(-b-d)/2*a;
    if(b*b>4*a*c)
    {
        printf("%f\t%f\n",E,F);
    }
    return 0;

}
