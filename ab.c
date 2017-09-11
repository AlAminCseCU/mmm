#include<stdio.h>
int main()
{
    float a,b,c,d,s1,s2;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    s1=(a/b+c/d);
    s2=(a*d+b*c)/(b-d);
    printf("s1 is:%f\n",s1);
    printf("s2 is:%f\n",s2);
    if
        (s1==s2)
        printf("s1=s2");
    else
        printf("s1!=s2");
    return 0;
}
