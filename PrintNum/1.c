/**
*��Ŀ����������n����˳���ӡ����1������nλʮ����������������3���ӡ1,2,3ֱ����λ��������999
**/
#include<stdio.h>

void printNum(int num,int length,int* arr)             //�������� ��1��ӡ����ֱ��Nλ��������һ����
{
    int i=0,j,status;
    for(i=0;i<=9;i++)
    {
        arr[length-num]=i;                              //Ƕ��ѭ����ÿһ��ѭ��ʵ�ִ�1-9�ı�����ÿһ��ѭ���������е�һλ
        if(num==1)                                      //����������һλ����������һλ��֮������
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
