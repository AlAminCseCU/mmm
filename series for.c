#include<stdio.h>
int main()
{
  int i,n,sum=0;
  printf("Enter an integer:\n");
  scanf("%d",&n);
  for(i=1;i<=2*n+1;i+=2)
  {
      sum=sum+i;
  }
  printf("%d",sum);
  return 0;
}
