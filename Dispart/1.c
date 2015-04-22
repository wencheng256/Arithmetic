/**
*题目：输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有技术位于数组的前半部分，所有偶数位于数组的后半部分
*/
#include<stdio.h>


void exchange(int* num1,int* num2)
{
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}


void Dispart(int *arr,int length)                           //快排类似方法
{
    if(arr==NULL||length==0)                                 //注意鲁棒性检查，鲁棒性检查应该是常态化喜欢，使用防御式的想法
        return;
    int *end=arr+length;
    int *p1=arr-1,*p2=arr;
    while(p2<=end)
    {
        if(*p2& 0x1)
        {
            p1++;
            exchange(p1,p2);
        }
        p2++;
    }
}

int main()
{
    int i;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    Dispart(arr,10);
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
}
