/**
*��Ŀ:����һ����������������е�����K����㡣Ϊ���ϴ�����˵�ϰ�ߣ������1��ʼ������
*/
#include<stdio.h>

struct LinkedNode{
    int value;
    LinkedNode* next;
};


LinkedNode* findLastK(LinkedNode* link,int k)
{
    LinkedNode *p1=link,*p2=link;
    int i;
    if(link==NULL||k==0)                                    //³���Լ�� Ҫ����˼��ÿһ�������ǲ��Ƕ���и�ɻ�
        return NULL;
    for(i=0;i<k&&p1!=NULL;i++)
    {
        p1=p1->next;
    }
    if(p1==NULL)
    {
        return NULL;
    }
    while(p1!=NULL)
    {
        p1=p1->next;
        p2=p2->next;
        printf("%d\n",p2->value);
    }
    return p2;
}

int main()
{
    LinkedNode *link,*p,*p1;
    int i;
    link=new LinkedNode;
    link->value=0;
    p=link;
    for(i=1;i<11;i++)
    {
        LinkedNode* next=new LinkedNode;
        next->value=i;
        next->next=NULL;
        p->next=next;
        p=p->next;
    }
    p1=findLastK(link,5);
    printf("%d\n",p1->value);
    p=link;
    for(i=0;i<11;i++)
    {
        delete p;
        p=p->next;
    }
    return 0;
}
