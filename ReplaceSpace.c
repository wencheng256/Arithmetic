#include<stdio.h>


void SpaceReplace(char* str)
{
	int lengthS=0,lengthF,com=0;
	int space=0,i;
	char *count,*p1,*p2;

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
			*p1='0';
			p1--;
			*p1='2';
			p1--;
			*p1='%';
			p1--;
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
