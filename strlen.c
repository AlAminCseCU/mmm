#include<stdio.h>
#include<string.h>
{
int string_length(char str[])
    int length,i;
    for(i=0;str[i]!='\0';i++){
        length++;
    }
    return length;
}
int main()
{
    char country[100];
    int length;
    scanf("%s",country);
    length=strlen(country);
    printf("%d",length);
}
