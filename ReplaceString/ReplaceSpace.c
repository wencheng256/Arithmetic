/**
*题目：请实现一个函数，把字符串中每个空格替换成“%20”例如输入“We are happy”，则输出“We%20are%20happy”。
**/
#include<stdio.h>


void SpaceReplace(char* str)
{
	int lengthS=0;              //分开声明变量更加直观
	int lengthF=0;
	int com=0;
	int space=0,i;
	char *count;
	char *p1;
	char *p2;

	for(count=str;*count!='\0';count++)
	{
		lengthS++;
		if(*count==' ')
            space++;
	}
	lengthF=lengthS+space*2;
	for(p1=str+lengthF,p2=str+lengthS;p1>p2&&p2>str;)
	{
		if(*p2!=' ')
		{
			*p1=*p2;
			p1--;
			p2--;
		}else
		{
			*(p1--)='0';                //优化代码减少代码量
			*(p1--)='2';
			*(p1--)='%';
			p2--;
		}
	}
    for(i=0;i<lengthF;i++)
	{
        printf("%c",*(str+i));
	}

}


int main()
{
    char test[]="we are Happy";
    SpaceReplace(test);
    return 0;
}
