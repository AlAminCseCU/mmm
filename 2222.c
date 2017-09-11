void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main()
{
    int a=3,b=7,t;
    t=a;
    a=b;
    b=t;
    printf("%d %d",a,b);
}
