/**
*��Ŀ:��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
*�����һ�����������������Ķ�ά�����һ���������ж��������Ƿ��и�������
**/
#include<stdio.h>

bool searchBinary(int **rect,int row,int col,int target)
{
    int nrow,ncol;
    nrow=0;
    ncol=col-1;
    while(nrow<row&&ncol<col)
    {
        if(rect[ncol][nrow]==target)                        //�����ܵ�λ�ñƽ���һ�������ڣ���Ҫ��ɢ����������
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

