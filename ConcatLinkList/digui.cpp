/**
*��Ŀ������������������������ϲ�����������ʹ�������еĽڵ���Ȼ�ǰ��յ�������ġ�
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

    listreturn->next=concat(list1,list2);

    return listreturn;
}
