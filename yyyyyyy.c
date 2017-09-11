#include<stdio.h>
int main()
{
    unsigned long d, bin[100],qout,i=1,j;
    scanf("%lu",&d);
    qout=d;
    while(qout!=0){

        bin[i++]=d%2;
        //i++;
        qout= d/2;
        d=qout;
    }

    for(j=i-1; j>0; j--){
        printf("%lu", bin[j]);
    }
    return 0;

}

