#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//1.�������������ӡ��Ӧ���еĳ˷���
//int main()
//{
//	int x = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &x);
//	for (i = 1; i < x; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d       ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//2.���ú���������������ֵ
//void swap(int *p, int *r)
//{
//	*p = *p^*r;
//	*r = *p^*r;
//	*p = *p^*r;
//
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int *p = &x;
//	int *r = &y;
//	swap(p, r);
//	printf("%d %d\n",x,y );
//	system("pause");
//	return 0;
//}
//3.���ú����ж�����
//int IsYear(int *p)
//{
//	return ((*p % 4 == 0 && *p % 100 != 0 )|| *p % 400 == 0);
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (IsYear(&year))
//	{
//		printf("%d������\n", year);
//	}
//	else
//	{
//		printf("%d��������\n", year);
//	}
//	system("pause");
//	return 0;
//}
////4.����һ�����飬 
////ʵ�ֺ���init������ʼ�����顢
////ʵ��empty����������顢
////ʵ��reverse���������������Ԫ�ص����á�
////Ҫ���Լ���ƺ����Ĳ���������ֵ��
//void init(int arr[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr [i]= i+1;
//	}
//	
//}
//void empty(int arr[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void reverse(int arr[10])
//{
//	int start = 0;
//	int end = 9;
//	int ret = 0;
//	while (start<end)
//	{
//		ret = arr[start];
//		arr[start] = arr[end];
//		arr[end] = ret;
//		start++;
//		end--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	init(arr);
//	reverse(arr);
//	empty(arr);
//	system("pause");
//	return 0;
//}
////5.ʵ��һ���������ж�һ�����ǲ�������
//int judge(int *p)
//{
//	int i = 0;
//	for (i = 2; i < *p; i++)
//	{
//		if (*p%i == 0)
//		{
//			return 0;
//		}
//	}
//	if (*p == i)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (judge(&x))
//	{
//		printf("%d������\n",x); 
//	}
//	else
//	{
//		printf("%d��������\n", x);
//	}
//	system("pause");
//	return 0;
//}