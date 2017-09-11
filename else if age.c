#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age<=16)
        printf("you are child");
    else if(age<=18)
        printf("you are teenager");
    else
        printf("you are an adult");
    return 0;
}
