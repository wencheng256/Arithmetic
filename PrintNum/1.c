/**
*题目：输入数字n，按顺序打印出从1到最大的n位十进制数。比如输入3则打印1,2,3直到三位数中最大的999
**/
#include<stdio.h>

void printNum(int num,int length,int* arr)             //大数问题 从1打印数字直到N位数中最大的一个数
{
    int i=0,j,status;
    for(i=0;i<=9;i++)
    {
        arr[length-num]=i;                              //嵌套循环，每一层循环实现从1-9的遍历，每一层循环更改其中的一位
        if(num==1)                                      //如果这是最后一位，更改完这一位数之后就输出
        {
            status=0;
            for(j=0;j<length;j++)
            {
                if(arr[j]!=0)
                    status=1;
                if(status)
                    printf("%d",arr[j]);
            }
            printf("\n");
        }
        else
            printNum(num-1,length,arr);
    }
}


int main()
{
    int arr[100];
    printNum(5,5,arr);
}
