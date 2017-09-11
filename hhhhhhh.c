#include<stdio.h>
int main()
{
 int a,b,c,max=0;
 scanf("%d%d%d",&a,&b,&c);
 if(a>max&&b<a&&c<a)
 {
     printf("%d",a);
 }
 else if(b>max&&a<b&&c<b)
 {
     printf("%d",b);
 }else if(c>max&&a<c&&b<c)
 {
     printf("%d",c);
 }
}
