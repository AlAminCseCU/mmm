#include<stdio.h>
int main()
{
    int f1[3]={50,60,70},f2[3]={80,90,74},f3[3]={88,78,74};
    int i;
    int f4[3];
    for(i=0;i<3;i++)
    {
        f4[i]=f1[i]/4+f2[i]/4+f3[i]/2;
    }for(i=0;i<3;i++){
    printf("roll no:%d\t%d\n",i+1,f4[i]);
    }
}
