#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
////��洢�Ĵ�С��
////1.ָ�뷽���ж�
//
//int judge(int * p)
//{
//	return *(char *)p;
//}
//int main()
//{
//	int i = 1;
//	int * p = &i;
//	if (judge(p))
//	{
//		printf("С�˴洢\n");
//	}
//	else
//	{
//		printf("��˴洢\n");
//	}
//	system("pause");
//	return 0;
//}
////�������ж�
//union judge
//{
//	int i;
//	char c;
//};
//int main()
//{
//	union judge j;
//	j.i = 1;
//	if (j.c)
//	{
//		printf("С�˴洢\n");
//	}
//	else
//	{
//		printf("��˴洢\n");
//	}
//	system("pause");
//	return 0;
//}
////ʹ�ú���ṹ���Աƫ����
//#define OFFSETOF(stName, memName) (size_t)&(((stName*)0)->memName)
//struct S
//{
//	int i;
//	char c;
//	double d;
//};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c));
//	printf("%d\n", OFFSETOF(struct S, d));
//	system("pause");
//	return 0;
//}