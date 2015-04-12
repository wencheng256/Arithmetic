#include<cstdio>

struct BinaryTreeNode
{
    int m_nValue;
    BinaryTreeNode* m_pLeft;
    BinaryTreeNode* m_pRight;
};


BinaryTreeNode* Construct(int* preorder,int* inorder,int length)                    //��ǰ��������������������ָ�뻯������ع�
{
    if(preorder==NULL||inorder==NULL||length<=0)
        return NULL;
    return ConstructCore(preorder,preorder+length-1,inorder,inorder+length-1);
}


BinaryTreeNode* ConstructCore(int* startPreorder,int* endPreorder,int* startInorder,int* endInorder)
{
    int rootVlue=startPreorder[0];
    BinaryTreeNode* root=new BinaryTreeNode();                                      //�ֶ������ڴ棬�����ڴ�Ͳ��ᱻ�Զ�����
    root->m_nValue=rootValue;
    root->m_pLeft=root->m_pRight=NULL;

    if(startPreorder==endPreorder)                                                  //�ж����������Ҳ�ǵݹ���ֹ����
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
    while(rootInorder<=endInorder && *rootInorder!=rootValue)                       //Ѱ�ҵ�ǰ�������Ԫ������������е�λ��
        rootInorder++;
    if(rootInorder==endInorder&&*rootInorder!=roorValue)                            //�жϣ����û���ҵ��Ļ����׳��쳣
        throw std::exception("Invalid input");
    int llength=rootInorder-startInorder;
    if(length>0)
    {
        root->m_pLeft=ConstructCore(startPreorder+1,startPreorder+length,startInorder,rootInorder-1);   //�ݹ�����������
    }
    if(length<endPreorder-startPreorder)
    {
        root->m_pRight=ConstructCore(leftPreorderEnd+1,endPreorder,rootInorder+1,endInorder);           //�ݹ�����������
    }
    return root;
}



