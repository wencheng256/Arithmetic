#include<stdio.h>

int countOne(int num)
{
    int s=1;
    int count = 0;
    while(s<=num)
    {
        if(s&num)
        {
            count++;
        }
        s=s<<1;                             //λ���ǽ��ж������������ķ���
    }                                       //�ж�һ�����Ƿ�Ϊ�������������&1 �����Ϊ0��Ϊ����
    return count;
}

int main()
{
    printf("%d\n",countOne(4));
}
