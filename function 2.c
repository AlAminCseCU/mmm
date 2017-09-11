void swap(int x,int b)
{
    int t;
    t=x;
    x=b;
    b=t;
}
int main()
{
    int a=3,b=7,c;
    c=a;
    a=b;
    b=c;
    printf("%d\t%d",a,b);
    return 0;
}
