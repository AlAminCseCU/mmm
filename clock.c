#include<stdio.h>
#include<windows.h>
#include<time.h>
int main()
{
    int h,m,s;
    for(h=0;h<24;h++)
    for(m=0;m<60;m++)
    for(s=0;s<60;s++)
    {
        printf("%2d:%2d:%2d\n",h,m,s);
        Sleep(1000);
        system("cls");

    }

}
