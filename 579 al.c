#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double t,i,j,k,l,h,m,n,a;
    while(scanf("%lf %lf",&h,&m)==2)
    {
        if(h==0 && m==0)
            break;
        i=((h*30)+(m/2));
        j=m*6;
        t=i-j;
        if(t<0)
            t*=-l;
        if(t>180)
            t=360-t;
            printf("%.3lf\n",t);
    }
    return 0;
}
