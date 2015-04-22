/**
*题目：输入两个递增排序的链表，合并两个链表并且使新链表中的节点仍然是按照递增排序的。
**/
#include<stdio.h>

struct LinkedNode
{
    int value;
    LinkedNode *next;
};

LinkedNode* concat(LinkedNode* list1,LinkedNode* list2)
{
    LinkedNode* listreturn=NULL;
    if(list1!=NULL&&list2!=NULL)
    {
        if(list1->value<=list2->value)
        {
            listreturn=list1;
            list1=list1->next;
        }
        else
        {
            listreturn=list2;
            list2=list2->next;
        }
    }else
    if(list1!=NULL)
        listreturn=list1;
    else
        listreturn=list2;

    while(list1!=NULL&&list2!=NULL)
    {
        if(list1->value<=list2->value)
        {
            listreturn->next=list1;
            list1=list1->next;
            listreturn=listreturn->next;
        }
        else
        {
            listreturn->next=list2;
            list2=list2->next;
            listreturn=listreturn->next;
        }
    }
    if(list1!=NULL)
        listreturn->next=list1;
    if(list2!=NULL)
        listreturn->next=list2;
    return listreturn;
}
