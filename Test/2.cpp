#include<stdio.h>
#include<stdlib.h>

int main( )
{
	int a=20;
	int* b=&a;
	b++;
	printf("%d\n",a);
	return 0;
}
