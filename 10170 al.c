#include<stdio.h>
#include<math.h>
int main()
{
    int s;
    double d;
    while(scanf("%d %lf",&s,&d)!=EOF){
        int below=(s*(s-1))/2;
        d+=below;
        d*=2;
        double n=ceil((sqrt(1+4*d)-1)/2.0);
        printf("%0.lf\n",n);
    }
    return 0;
}
