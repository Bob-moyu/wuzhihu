#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
////1.һ��������ֻ�����������ǳ���һ�Σ� 
////�����������ֶ����������Ρ�
////�ҳ����������֣����ʵ�֡�
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[] = { 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz; j++)
//		{
//			if (i != j)
//			{
//				if ((arr[i] ^ arr[j]) == 0)
//				{
//					break;
//				}
//			}
//		}
//		if (j == sz)
//		{
//			printf("%d\n", arr[i]);
//		}
//	}
//	system("pause");
//	return 0;
//}

////2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ�� 
////��20Ԫ�����Զ�����ˮ��
////���ʵ�֡�
//int main()
//{
//	int n = 20;
//	int i = 0;
//	int count = 0;
//	for (n = 20; n > 0; n--)
//	{
//		count++;
//		i++;
//		if (i >= 2)
//		{
//			i = 0;
//			n++;
//		}
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//
//}
////ģ��ʵ��strcpy
//void my_strcmp(char *dest, const char *src, int count)
//{
//	while ((*dest++ = *src++) && *src)
//	{
//		count--;
//		if (count <= 0)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int count = 0;
//	scanf("%d", &count);
//	char arr1[20] = {0};
//	char arr2[] = "abcdef";
//	my_strcmp(arr1, arr2, count);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
////ģ��ʵ��strcat
//void my_strcat(char *dest, const char *src, int count)
//{
//	while (*++dest)
//	{
//		;
//	}
//	while ((*dest++ = *src++) && *src)
//	{
//		count--;
//		if (count <= 0)
//		{
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int count = 0;
//	scanf("%d", &count);
//	char arr1 [20]= "hello word ";
//	char arr2[] = "hahaha";
//	my_strcat(arr1, arr2, count);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}