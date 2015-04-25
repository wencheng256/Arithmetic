/**
*题目：输入两棵二叉树A和B，判断B是不是A的子结构。二叉树结点的定义如下：
*struct BinaryTreeNode
*{
*   int             m_nValue;
*   BinaryTreeNode  m_pLeft;
*   BinaryTreeNode  m_pRight;
*}
**/

#include<stdio.h>

struct BinaryTreeNode
{
    int             Value;
    BinaryTreeNode  *pLeft;
    BinaryTreeNode  *pRight;
};

bool isSubtree(BinaryTreeNode *tree,BinaryTreeNode *subtree)
{
    if(subtree==NULL)
        return true;
    if(tree==NULL)
        return false;
    if(tree->Value!=subtree->Value)
        return false;
    return isSubtree(tree->pLeft,subtree->pLeft)||isSubtree(tree->pRight,subtree->pRight);
}

bool hasSubtree(BinaryTreeNode *tree,BinaryTreeNode *subtree)
{
    if(tree==NULL||subtree==NULL)
        return false;
    if(tree->Value==subtree->Value)
    {
        if(isSubtree(tree,subtree))
           return true;
    }
    return hasSubtree(tree->pLeft,subtree)||hasSubtree(tree->pRight,subtree);
}


int main()
{
    BinaryTreeNode *head,*left1,*left2,*left3,*left4,*left5,*right1,*left11,*left12,*left13;

    head=new BinaryTreeNode;
    head->Value=8;
    head->pLeft=NULL;
    head->pRight=NULL;

    left1=new BinaryTreeNode;
    left1->Value=8;
    left1->pLeft=NULL;
    left1->pRight=NULL;
    head->pLeft=left1;

    left2=new BinaryTreeNode;
    left2->Value=9;
    left2->pLeft=NULL;
    left2->pRight=NULL;
    left1->pLeft=left2;

    left3=new BinaryTreeNode;
    left3->Value=2;
    left3->pLeft=NULL;
    left3->pRight=NULL;
    left1->pRight=left3;

    left4=new BinaryTreeNode;
    left4->Value=4;
    left4->pLeft=NULL;
    left4->pRight=NULL;
    left3->pLeft=left4;

    left5=new BinaryTreeNode;
    left5->Value=7;
    left5->pLeft=NULL;
    left5->pRight=NULL;
    left3->pRight=left5;

    right1=new BinaryTreeNode;
    right1->Value=7;
    right1->pLeft=NULL;
    right1->pRight=NULL;
    head->pRight=right1;

    left11=new BinaryTreeNode;
    left11->Value=8;
    left11->pLeft=NULL;
    left11->pRight=NULL;

    left12=new BinaryTreeNode;
    left12->Value=9;
    left12->pLeft=NULL;
    left12->pRight=NULL;
    left11->pLeft=left2;

    left13=new BinaryTreeNode;
    left13->Value=2;
    left13->pLeft=NULL;
    left13->pRight=NULL;
    left11->pRight=left3;

    printf("%d\n",hasSubtree(head,left11));

    return 0;
}
