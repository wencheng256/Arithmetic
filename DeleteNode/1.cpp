/**
*��Ŀ���������������ͷָ���һ���ڵ�ָ�룬����һ��������O(1)ʱ����ɾ���ýڵ㣬�������뺯���������£�
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
     if(nodestart==NULL||nodedelete==NULL)                                          //����ɾ������������һ������ֵ���豾�ڵ㣬�ٽ���һ�����ɾ��������Ҫ���Ǳ߽�����
     {
         return;
     }
    if(nodedelete->m_pNext!=NULL)
    {
        nodedelete->m_pValue=nodedelete->m_pNext->m_pValue;
        nodedelete->m_pNext=nodedelete->m_pNext->m_pNext;
        delete next;                                                                //�ǵ�Ҫ��Դ���հ���
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


