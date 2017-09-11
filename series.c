#include<stdio.h>
int main()
{
  int n=4,sum=0;
  while(n<=16)
  {
      sum=sum+n;
      n=n+3;
  }
  printf("%d",sum);
  return 0;

}

