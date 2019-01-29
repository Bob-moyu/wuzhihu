#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include<string.h>

#include<stdlib.h>



typedef char Elementtype;    //    �����������ͣ��ɸ�����Ҫ���ж���

typedef struct TreeNode * Node;    //    Node�൱��struct treeNode *

//    �������ڵ�ṹ

typedef struct TreeNode

{

	Elementtype Element;

	Node left;    //    ���ڵ�����ӽڵ�

	Node right;    //    ���ڵ�����ӽڵ�

}TREE, *PTREE;



//    ��������

void CreatTree(PTREE *);    //    �������򴴽�����

void PreOrderTree(PTREE);    //    ����ǰ���������

void InOrderTree(PTREE);    //    �����������

void PostOrderTree(PTREE);    //    ���ĺ������



void LeafOfTree(PTREE);    //    ��ӡ����Ҷ�ӽڵ㺯��

int Get_Leaf_Num(PTREE);    //    ��ȡ��Ҷ�ӽڵ����

int Get_Height(PTREE);    //    ��ȡ���ĸ߶�



int main() {



	PTREE Root;

	printf("����������������Ľڵ����ݣ� ");

	CreatTree(&Root);

	printf("\nǰ��������Ϊ��");

	PreOrderTree(Root);

	printf("\n����������Ϊ��");

	InOrderTree(Root);

	printf("\n����������Ϊ��");

	PostOrderTree(Root);

	printf("\n��ӡҶ�ӽڵ�Ϊ��");

	LeafOfTree(Root);

	printf("\nҶ�ӽڵ����Ϊ��%d", Get_Leaf_Num(Root));

	printf("\n�������ĸ߶�Ϊ��%d", Get_Height(Root));

	printf("\n");



	return 0;

}



//    ���������򴴽�����

void CreatTree(PTREE *Root) {

	char val = 0;    //    ��������������

	val = getchar();    //    ��������ֵ

	//    �������' '����ָ��Ϊ��

	if (val == ' ')

		(*Root) = NULL;

	else

	{

		(*Root) = (PTREE)malloc(sizeof(TREE));    //    �����ڴ�ռ�

		if ((*Root) == NULL) {

			printf("�����ڵ�ʧ�ܣ��޷���������ڴ�...\n");

			exit(-1);

		}

		else {

			(*Root)->Element = val;    //    ���ڵ�������ֵ

			CreatTree(&(*Root)->left);

			CreatTree(&(*Root)->right);

		}

	}



}

//    ����ǰ�������������

void PreOrderTree(PTREE Root) {



	if (Root == NULL)

		return;

	else {

		putchar(Root->Element);

		PreOrderTree(Root->left);

		PreOrderTree(Root->right);



	}

}

//    �������������������

void InOrderTree(PTREE Root) {



	if (Root == NULL)

		return;

	else {

		InOrderTree(Root->left);

		putchar(Root->Element);

		InOrderTree(Root->right);



	}

}



//    ���ĺ��������������

void PostOrderTree(PTREE Root) {



	if (Root == NULL)

		return;

	else{

		PostOrderTree(Root->left);

		PostOrderTree(Root->right);

		putchar(Root->Element);

	}

}







//    ��ӡ����Ҷ�ӽڵ㺯������

void LeafOfTree(PTREE Tree) {

	if (Tree == NULL)

		return;



	else {

		if (Tree->left == NULL&&Tree->right == NULL)

			putchar(Tree->Element);

		else {

			LeafOfTree(Tree->left);

			LeafOfTree(Tree->right);

		}

	}



}



//    ��ȡ����Ҷ�ӽڵ������������

int Get_Leaf_Num(PTREE Tree) {

	if (Tree == NULL)

		return 0;

	if (Tree->left == NULL&&Tree->right == NULL)

		return 1;

	//�ݹ���������Ҷ�ӽڵ���� = ������Ҷ�ӽڵ�ĸ��� + ������Ҷ�ӽڵ�ĸ���

	return Get_Leaf_Num(Tree->left) + Get_Leaf_Num(Tree->right);

}

//    ��ȡ���ߵĺ�������

int Get_Height(PTREE Tree) {

	int Height = 0;

	if (Tree == NULL)

		return 0;



	//���ĸ߶� = max(�������ĸ߶ȣ��������ĸ߶�) + 1

	else

	{

		int L_Height = Get_Height(Tree->left);

		int R_Height = Get_Height(Tree->right);

		Height = L_Height >= R_Height ? L_Height + 1 : R_Height + 1;

	}

	return Height;

}