int fact(int n)
{
    int f;
    if(n==1)
        return 1;
    f=n*fact(n-1);
    return f;
}
int main()
{
    int f,k=5;
    if(k==1)
        return 1;
    f=k*fact(k-1);
    printf("%d",f);
    return f;
}
