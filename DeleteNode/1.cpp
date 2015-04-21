/**
*题目：给定单向链表的头指针和一个节点指针，定义一个函数在O(1)时间内删除该节点，链表结点与函数定义如下：
*struct ListNode
*{
*   int         m_nValue;
*   ListNode*   m_pNext;
*}
**/

#include<stdio.h>

struct ListNode
{
    int         m_pValue;
    ListNode*   m_pNext;
};


void deleteNode(ListNode* nodestart,ListNode* nodedelete)
{
     ListNode *next=nodedelete->m_pNext;
     ListNode *temp;
     if(nodestart==NULL||nodedelete==NULL)                                          //最快的删除方法，将下一个结点的值赋予本节点，再将下一个结点删除，但是要考虑边界问题
     {
         return;
     }
    if(nodedelete->m_pNext!=NULL)
    {
        nodedelete->m_pValue=nodedelete->m_pNext->m_pValue;
        nodedelete->m_pNext=nodedelete->m_pNext->m_pNext;
        delete next;                                                                //记得要资源回收啊！
        next=NULL;
    }else
    {
        if(nodestart==nodedelete)
        {
            delete nodestart;
            nodestart=NULL;
            return;
        }
        temp=nodestart;
        while(temp->m_pNext!=nodedelete)
        {
            temp=temp->m_pNext;
        }
        temp->m_pNext=nodedelete->m_pNext;
        delete nodedelete;
        nodedelete=NULL;
    }
}

int main()
{
}


