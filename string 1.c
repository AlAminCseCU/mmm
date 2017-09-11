#include<stdio.h>
int main()
{
    char country[11]={'B','a','n','g','l','a','d','e','s','h'};
    int i;
    for(i=0;i<11;i++){
        if(country[i]>=97&&country[i]<=122)
            country[i]='A'+(country[i]-'a');
    }
    printf("%s\n",country);
    return 0;
}
