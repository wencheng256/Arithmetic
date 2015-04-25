/**
*题目:在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
*请完成一个函数，输入这样的二维数组和一个整数，判断数组中是否含有该整数；
**/
#include<stdio.h>

bool searchBinary(int **rect,int row,int col,int target)
{
    int nrow,ncol;
    nrow=0;
    ncol=col-1;
    while(nrow<row&&ncol<col)
    {
        if(rect[ncol][nrow]==target)                        //将可能的位置逼近到一个区域内，不要分散在两个区域
            return true;
        if(rect[ncol][nrow]>target)
            ncol--;
        else
            nrow++;
    }
    return false;

}



int main()
{
    int rect[4][4]={{1,2,4,6},{2,4,7,8},{8,9,10,11},{9,12,13,15}};
    printf("%d\n",searchBinary(rect,4,4,8));
}

