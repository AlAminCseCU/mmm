#include<stdio.h>
int main()
{
    long int d, bin[100],qout,i=1,j;
    scanf("%ld",&d);
    qout=d;
    while(qout!=0){

        bin[i++]=d%2;
        //i++;
        qout= d/2;
        d=qout;
    }

    for(j=i-1; j>0; j--){
        printf("%ld", bin[j]);
    }
    return 0;

}
