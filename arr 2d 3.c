#include<stdio.h>
int main()
{
    int p[3][3]={{6,4,7},{3,7,1},{8,6,4}};
    int row,col,sum[row];
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            sum[row]=row[0]+col[0];
        }
    }
    for(sum=0;sum<3;sum++){
        printf("%d\n",sum[row]);
    }
}
