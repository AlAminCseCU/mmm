#include<stdio.h>
int main()
{
    int listprice,discountrate,Discount;
    scanf("%d%d",&listprice,&discountrate);
    Discount=listprice*discountrate;
    printf("Discount is:%d",Discount);
    return 0;
}
