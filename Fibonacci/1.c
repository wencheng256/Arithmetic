/**
*尽量高效的打印出前N个斐波那契数
*/
#include<stdio.h>

void fibonacci(int n)
{
    int a=0,b=1,c;                  //使用循环的方式效率比递归会高很多很多
    while(n>0)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
        n--;
    }
}



int main()
{
    int n;
    scanf("%d",&n);
    fibonacci(n);
}
