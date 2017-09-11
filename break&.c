#include<stdio.h>
int main()
{
  int i=2,n;
  scanf("%d",&n);
  for(;i<n;i++)
  {
      if(n%i==0)
        break;
  }if(n==i)
 printf("%d the number is prime",n);


}


