#include<stdio.h>
int main()
{
    int t=0,counter=1;
    while(scanf("%d",&t)==1)
    {
        int i,j,k,a[t];
        for(i=0;i<t;i++)
            scanf("%d",&a[i]);
        long max=0;
        for(i=0;i<t;i++){
            for(j=1;j<t;j++){
                long product=1;
                for(k=i;k<=j;k++){
                    product*=a[k];
                }
                if(max<product)
                    max=product;
            }
        }
        printf("Case #%d: The maximum product is %ld.\n\n",counter,max);
        counter++;
    }
    return 0;
}
