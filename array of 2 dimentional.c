#include<stdio.h>
int main()
{
    int marks[4][5]={{10,20,30,40,50},{60,70,80,90,30},{50,60,80,40},{0,0,0,0,0},};
    int col;
    for(col=0;col<5;col++)
    {
        marks[3][col]=marks[0][col]/4+marks[1][col]/4+marks[2][col]/2;
        printf("roll:%d\t%d\n",col+1,marks[3][col]);
    }
}
