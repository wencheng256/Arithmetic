/**
*题目：请实现一个函数，输入一个整数，输出改二进制表示中一的个数。例如把9表示成二进制是1001，有2位是1。因此如果输入9则输出2。
*/
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
        s=s<<1;                             //位移是进行二进制运算最快的方法
    }                                       //判断一个数是否为奇数就让这个数&1 如果不为0则为奇数
    return count;
}

int main()
{
    printf("%d\n",countOne(4));
}
