#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
#define Length 11

int PreOr[Length]={1,2,4,5,8,9,10,11,3,6,7};
int InOr[Length]={4,2,8,5,10,9,11,1,6,3,7};

typedef int Status;
typedef char TElemType;

typedef struct BitNode{
	TElemType data;
	struct BitNode *lchild,*rchild;
}BitNode,*BiTree;

Status CreatePreBiTree(BiTree &T);
void PreOrderTraverse(BiTree T);
void InOrderTraverse(BiTree T);
void PostOrderTraverse(BiTree T);
Status LevelOrderTraverse(BiTree T);
 BitNode* Build(int* prestart,int* preend,int* midstart,int* midend);
