#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    double pi=acos(-1);
    double pm,ta,R,sfa,icr,ica,va;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
        pm=(a+b+c)/2;
        ta=sqrt(pm*(pm-a)*(pm-b)*(pm-c));
        R=((a*b*c)/4)/ta;
        sfa=(pi*R*R)-ta;
        icr=ta/pm;
        ica=pi*icr*icr;
        va=ta-ica;
        printf("%.4lf %.4lf %.4lf\n",sfa,va,ica);
    }
    return 0;
}
