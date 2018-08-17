/*
#include<stdio.h>
#include<stdlib.h>

typedef struct BiTreeNode
{
  char data;
  struct BiTreeNode *lchild;
  struct BiTreeNode *rchild;
}BiTreeNode,*BiTree;

void CreateBinaryTree(BiTree *T)
{
  char ch;
  scanf("%c",&ch);
  if(ch == '#')
    *T == NULL;
  else
  {
    *T = (BiTree)malloc(sizeof(BiTreeNode));
    (*T)->data=ch;
    CreateBinaryTree(&((*T)->lchild));
    CreateBinaryTree(&((*T)->rchild));
  }
}

//�������
void PreOrderTraverse(BiTree T)
{
  if(T == NULL)
    return;
  else
  {
    printf("%c",T->data);
    PreOrderTraverse(T->lchild);
    PreOrderTraverse(T->rchild);
  }
}

//�������
void InOrderTraverse(BiTree T)
{
  if(T == NULL)
    return;
  else
  {
    InOrderTraverse(T->lchild);
    printf("%c",T->data);
    InOrderTraverse(T->rchild);
  }
}

//�������

void PostOrderTraverse(BiTree T)
{
  if(T == NULL)
    return;
  else
  {
    PostOrderTraverse(T->lchild);
    PostOrderTraverse(T->rchild);
    printf("%c", T->data);
  }
}

int main( )
{
  BiTree T;
  printf("�봴��һ�ö�������\n");
  CreateBinaryTree(&T);
  printf("\n����������Ϊ��\n");
  PreOrderTraverse(T);
  printf("\n����������Ϊ��\n");
  InOrderTraverse(T);
  printf("\n����������Ϊ��\n");
  PostOrderTraverse(T);
  return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct BiTreeNode
{
	char data;
	struct BiTreeNode *lchild;
	struct BiTreeNode *rchild;
}BiTreeNode,*BiTree;

void CreateBinaryTree(BiTree *T)
{
	char ch;
	scanf("%c",&ch);
	if(ch=='#')
		*T=NULL;
	else
	{
		*T=(BiTree)malloc(sizeof(BiTreeNode));
		(*T)->data=ch;
		CreateBinaryTree(&((*T)->lchild));
		CreateBinaryTree(&((*T)->rchild));
	}
}

//�������
void PreOrderTraverse(BiTree T)
{
	if(T==NULL)
		return;
	else
	{
		printf("%c",T->data);
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
}
//�������
void InOrderTraverse(BiTree T)
{
	if(T==NULL)
		return;
	else
	{
		InOrderTraverse(T->lchild);
		printf("%c",T->data);
		InOrderTraverse(T->rchild);
	}
}

//�������
void PostOrderTraverse(BiTree T)
{
	if(T==NULL)
		return;
	else
	{
		PostOrderTraverse(T->lchild);
		PostOrderTraverse(T->rchild);
		printf("%c",T->data);
	}
}

int main(int argc, char *argv[])
{
	BiTree T;
	printf("�봴��һ�ö�����:\n");
	CreateBinaryTree(&T);
	printf("\n��������Ľ��Ϊ��\n");
	PreOrderTraverse(T);
	printf("\n��������Ľ��:\n");
	InOrderTraverse(T);
	printf("\n��������Ľ��:\n");
	PostOrderTraverse(T);
	return 0;
}
