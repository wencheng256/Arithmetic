#include<stdio.h>

void fibonacci(int n)
{
    int a=0,b=1,c;
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
