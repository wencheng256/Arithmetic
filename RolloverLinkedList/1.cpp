/**
*题目:定义一个函数，输入一个链表的头结点，翻转该链表并输出翻转后的链表的头结点。
**/
#include<stdio.h>

struct LinkedNode
{
    int value;
    LinkedNode* next;
};

LinkedNode* rellover(LinkedNode *link)
{
    if(link==NULL)
        return NULL;
    LinkedNode *prevp,*thisp,*nextp;
    prevp=link;
    if(prevp->next!=NULL)
    {
        thisp=prevp->next;
    }
    else
        return prevp;

    nextp=thisp->next;
    link->next=NULL;
    while(nextp!=NULL)
    {
        thisp->next=prevp;
        prevp=thisp;
        thisp=nextp;
        nextp=nextp->next;
    }
    thisp->next=prevp;
    return thisp;
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
    p1=rellover(link);
    while(p1->next!=NULL)
    {
        printf("%d\n",p1->value);
        p1=p1->next;
    }
    p=link;
    for(i=0;i<11;i++)
    {
        delete p;
        p=p->next;
    }
    return 0;
}
