#include<stdio.h>
int main()
{
    int a[5]={2,5,4,1,3};
    int max=a[0];
    int i;
    for(i=0;i<5;i++){
        if(a[i]>max)
            max=a[i];
    }
    printf("%d",a[i]);
    return 0;
}
