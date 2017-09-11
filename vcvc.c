#include<stdio.h>
int main()
{
    int a[10][10];
    int row,col;
    for(row=1;row<=10;row++){
        for(col=1;col<=10;col++){
            a[row][col]=(row)*(col);
            printf("%d*%d=%d\n",(row),(col),a[row][col]);
        }
    }
    return 0;
}
