/**
*��Ŀ����ʵ��һ�����������ַ�����ÿ���ո��滻�ɡ�%20���������롰We are happy�����������We%20are%20happy����
**/
#include<stdio.h>


void SpaceReplace(char* str)
{
	int lengthS=0;              //�ֿ�������������ֱ��
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
			*(p1--)='0';                //�Ż�������ٴ�����
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
