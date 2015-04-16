#include"标头.h"
#include<cstdio>
#include<cstdlib>
#include<iostream>


Status CreatePreBiTree(BiTree &T){
	char ch;
	scanf("%c",&ch);
	if(ch=='#')
		T=NULL;
	else{
		if(!(T=(BitNode*)malloc(sizeof(BitNode))))
			exit(OVERFLOW);
		T->data=ch;
		CreatePreBiTree(T->lchild);
		CreatePreBiTree(T->rchild);
	}
	return OK;
}

void PreOrderTraverse(BiTree T){
	if(T){
		printf("%c",T->data);
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
}

void InOrderTraverse(BiTree T){
	if(T){
		InOrderTraverse(T->lchild);
		printf("%c",T->data);
		InOrderTraverse(T->rchild);
	}
}

void PostOrderTraverse(BiTree T){
	if(T){
		PostOrderTraverse(T->lchild);
		PostOrderTraverse(T->rchild);
		printf("%d ",T->data);
	}
}

Status LevelOrderTraverse(BiTree T){
	return OK;
}

/*
int Locate(int n){
	int i;
	for(i=0;i<Length;i++)
		if(PreOr[n]==InOr[i])
			return i;
}
*/
/*
BitNode* PreAndIn(int count){
	BitNode* T=new BitNode;
	T->data=PreOr[count];

	if(Locate(count+1)+1 <= Locate(count))
				PreAndIn(count+1);
			else
				T=NULL;
			if(Locate(2+Locate(count))-1 >= Locate(count)){
	            PreAndIn(T->rchild,2+Locate(count));}
			else{
				T=NULL;
			}
	return T;
}
*/

 BitNode* BuildTree(int *pre,int *mid,int length)
 {
	int *preend=pre+length-1;
	int *midend=mid+length-1;
	return Build(pre,preend,mid,midend);
 }
 BitNode* Build(int* prestart,int* preend,int* midstart,int* midend)
 {
	 int* p=midstart;
	 int length=0;
	 BitNode* T=new BitNode;
	 printf("根节点是%d,先%d->%d,后%d->%d\n",*prestart,*prestart,*preend,*midstart,*midend);
	 T->data=*prestart;
	 T->lchild=NULL;
	 T->rchild=NULL;
	 if(preend-prestart==0)
		 return T;
	 while(prestart[0]!=*p&&p<=midend)
	 {
		p++;
		length++;
	 }

	 if(p>midend)
		 throw "ERROR";

	 T->lchild=Build(prestart+1,prestart+length,midstart,p-1);
	 T->rchild=Build(prestart+length+1,preend,p+1,midend);

	 return T;
 }

int main()
{
	BiTree T;
	T=BuildTree(PreOr,InOr,Length);


	PostOrderTraverse(T);
	printf("\n");
	return 0;
}
