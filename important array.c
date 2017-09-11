#include<stdio.h>
int main()
{
    int n[4][2]={{20,30},{40,50},{60,70},{0,0}};
    int col;
    for(col=0;col<2;col++){
        n[3][col]=n[0][col]/4+n[1][col]/4+n[2][col]/2;
        printf("Roll no:%d\t%d\n",col+1,n[3][col]);
    }
}
