int add(int *x,int *b)
{
    int c;
    c=(*x)+(*b);
    return c;
}
int main()
{
    int a=7,b=3,c;
    c=*a+*b;
    printf("%d",c);
    return c;
}

