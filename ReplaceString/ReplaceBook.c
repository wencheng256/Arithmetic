#include<stdio.h>

void ReplcaeBlank(char string[],int length/*�ַ��������ܳ���*/)
{
    int originalLength=0;                  //�����������ܵľ���һЩ
    int numberOfBlank=0;
    int newLength=0;
    int indexOriginal=0;
    int indexNew=0;
    int i=0;

    if(string==NULL||length<=0)
        return;

    while(string[i]!='\0')
    {
        ++originalLength;
        if(string[i]==' ')
            ++numberOfBlank;
        i++;
    }

    newLength=originalLength+numberOfBlank*2;
    if(newLength>length)
        return;

    indexOriginal=originalLength;
    indexNew=newLength;
    while(indexOriginal>0&&indexNew>indexOriginal)
    {
        if(string[indexOriginal]!=' ')
        {
            string[indexNew--]=string[indexOriginal--];             //����ʹ��--���ż��ٴ�����
        }else
        {
            string[indexNew--]='0';
            string[indexNew--]='2';
            string[indexNew--]='%';
            indexOriginal--;
        }
    }

}


int main()
{
    char test[20]="we are Happy";
    ReplcaeBlank(test,20);
    printf("%s",test);
}
