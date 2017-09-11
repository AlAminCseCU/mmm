#include<stdio.h>
int main()
{
    int n[10][10];
    int row,col;
    for(row=0;row<10;row++){
        for(col=0;col<10;col++){
            n[row][col]=(row+1)*(col+1);
        }
    }
    for(row=0;row<10;row++){
        for(col=0;col<10;col++){
            printf("%d*%d=%d\n",(row+1),(col+1),n[row][col]);
        }
    }
}
