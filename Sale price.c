#include<stdio.h>
int main()
{
    int listprice,discount,Saleprice;
    scanf("%d%d",&listprice,&discount);
    Saleprice=listprice-discount;
    printf("Saleprice is:%d",Saleprice);
    return 0;
}
