/**
*��Ŀ������һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ�����м���λ�������ǰ�벿�֣�����ż��λ������ĺ�벿��
*/
#include<stdio.h>


void exchange(int* num1,int* num2)
{
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}


void Dispart(int *arr,int length)                           //�������Ʒ���
{
    if(arr==NULL||length==0)                                 //ע��³���Լ�飬³���Լ��Ӧ���ǳ�̬��ϲ����ʹ�÷���ʽ���뷨
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
