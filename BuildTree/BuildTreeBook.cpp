#include<cstdio>

struct BinaryTreeNode
{
    int m_nValue;
    BinaryTreeNode* m_pLeft;
    BinaryTreeNode* m_pRight;
};


BinaryTreeNode* Construct(int* preorder,int* inorder,int length)                    //将前序遍历和中序遍历的数组指针化，方便地柜
{
    if(preorder==NULL||inorder==NULL||length<=0)
        return NULL;
    return ConstructCore(preorder,preorder+length-1,inorder,inorder+length-1);
}


BinaryTreeNode* ConstructCore(int* startPreorder,int* endPreorder,int* startInorder,int* endInorder)
{
    int rootVlue=startPreorder[0];
    BinaryTreeNode* root=new BinaryTreeNode();                                      //手动分配内存，这样内存就不会被自动回收
    root->m_nValue=rootValue;
    root->m_pLeft=root->m_pRight=NULL;

    if(startPreorder==endPreorder)                                                  //判断特殊情况，也是递归终止条件
    {
        if(startInorder==endInorder&&*startPreorder==*startInorder)
        {
            return root;
        }
        else{
            throw std::exception("Invalid input");
        }
    }

    int *rootInorder=startInorder;
    while(rootInorder<=endInorder && *rootInorder!=rootValue)                       //寻找到前序遍历首元素在中序遍历中的位置
        rootInorder++;
    if(rootInorder==endInorder&&*rootInorder!=roorValue)                            //判断，如果没有找到的话就抛出异常
        throw std::exception("Invalid input");
    int llength=rootInorder-startInorder;
    if(length>0)
    {
        root->m_pLeft=ConstructCore(startPreorder+1,startPreorder+length,startInorder,rootInorder-1);   //递归生成左子树
    }
    if(length<endPreorder-startPreorder)
    {
        root->m_pRight=ConstructCore(leftPreorderEnd+1,endPreorder,rootInorder+1,endInorder);           //递归生成右字数
    }
    return root;
}



