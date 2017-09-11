
#include <stdio.h>
#include<string.h>
int main()
{
char str1[] = "bangla",str3[4];
int i, j, length1 = 6;
for(i = 0, j = 0; i < length1; i++, j++) {
str3[j] = str1[i];
printf("%s\n",str3);
}
}
