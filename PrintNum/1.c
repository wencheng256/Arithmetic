#include<stdio.h>

void printNum(int num,int length,int* arr)
{
    int i=0,j,status;
    for(i=0;i<=9;i++)
    {
        arr[length-num]=i;
        if(num==1)
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
