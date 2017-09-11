#include<stdio.h>
int main()
{
     int discount,listprice,Discountrate;
    scanf("%d%d",&discount,&listprice);
    Discountrate=discount/listprice;
    printf("Discount rate is:%d",Discountrate);
    return 0;
}
