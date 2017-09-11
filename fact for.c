#include<stdio.h>
int main()
{
  int n,fact=1;
  scanf("%d",&n);
  for(;n>=1;n--)
  {
    fact=fact*n;
  }
  printf("%d",fact);
  return 0;

}
