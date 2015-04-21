/**
*题目：经典的快排算法
**/
#include<stdio.h>

void exchange(int *a,int *b)                //负责交换两个指针指向的int值
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


void sort(int * start,int * end)
{
    int *p,*p1;
    if(start==end)
        return;
    if(start+1==end)
    {
        if(*start>*end)
            exchange(start,end);
        return;
    }
    p=start-1;
    p1=start;
    while(p1<end)
    {
        if(*p1<*end)
        {
            p++;
            exchange(p,p1);
            p1++;
        }else{
            p1++;
        }
    }
    exchange(++p,end);
    if(p>start)
        sort(start,p-1);
    if(p<end)
        sort(p+1,end);
}


void quickSort(int *arr,int length)
{
    if(arr==NULL||length<=1)
        return;
    sort(arr,arr+length);
}





int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},i;
    quickSort(arr,10);
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
}
