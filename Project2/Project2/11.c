#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//void adjust_arr(int arr[], int size)
//{
//	int temp = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0, j = size - 1; i <j;)
//	{
//		if ((arr[i] % 2 == 0) && (arr[j] % 2 == 1))     
//		{
//			temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//		if (arr[i] % 2 == 1)
//		{
//			i++;
//		}
//		if (arr[j] % 2 == 0)
//		{
//			j--;
//		}	
//	}
//}
//
//int main()
//{
//	int arr[] = { 2, 3, 4, 5, 6, 7, 10, 11, 12, 13, 14, 15, 16, 8, 9, 17, 18, 19, 20 };
//	int i=0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	adjust_arr(arr, size);    
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//ÿ�������Ͻ����Ƚϣ�����һ�л�һ�У�ʵ�δ���ַ
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int i = 0;
//	int j = 0;
//	int arr[11][3] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 }, { 0, 0, 0 }, { 1, 3, 4 },
//	{ 3, 4, 5 }, { 4, 5, 6 }, { 0, 0, 0 }, { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	if (x > arr[10][2])
//	{
//		printf("X������\n");
//	}
//	else if (x > arr[6][2])
//	{
//		for (i =6; i < 11; i++)
//		{
//			for (j = 0; j < 3; j++)
//			{
//				if (x == arr[i][j])
//				{
//					printf("X��[%d, %d]λ��\n", i + 1, j + 1);
//				}
//			}
//		}
//	}
//	else if (x>arr[2][2])
//	{
//		for (i = 2; i <=6; i++)
//		{
//			for (j = 0; j < 3; j++)
//			{
//				if (x == arr[i][j])
//				{
//					printf("X��[%d, %d]λ��]\n", i + 1, j + 1);
//				}
//			}
//		}
//	}
//	else if (x>arr[0][0])
//	{
//		for (i = 0; i <=2; i++)
//		{
//			for (j = 0; j < 3; j++)
//			{
//				if (x == arr[i][j])
//				{
//					printf("X��[%d,%d]λ��\n", i + 1, j + 1);
//				}
//			}
//		}
//	}
//	else
//	{
//		printf("X������\n");
//	}
//	system("pause");
//	return 0;
//}
//14.1   ��char *str,int k��k��ʾ��ת��λ �� ����ת���������ַ������ȣ�������ת����ĥ���ȸ������
//������ⷨ�������һ���ַ����ƶ���������ַ�������õ����ݷŵ����
//������ת����abcdef
//ab  cdef �ֳ�������
//ba  fedc �ֱ�ת
//cdefab   ���巴ת
//14.2  
//һ��ÿ����תһλ���ж��Ƿ����  �ܹ�ѭ��Ŀ���ַ������ȴ�
//����1.׷��Ŀ���ַ���strcat��arr,"fhg"��;arr׷�ӵ�Ŀ�꣬fhg׷�ӵ��ַ���������׷���Լ�
//strncat��arr,arr,n������׷���Լ���nΪ����
//�ж��ַ�������strstr��arr1��arr2����arr1��Ŀ���ַ�������Ҫ�жϵ��ַ�����
//void reverse(char*left, char*right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void swap(char * str, int k)
//{
//	
//	int len = strlen(str);
//	k %= len;
//	reverse(str, str+k-1);
//	reverse(str+k, str+len-1);
//	reverse(str, str+len-1);
//	
//}
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	char arr[10] = "ABCDEF";
//	swap(arr, k);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int k = 0;
//	int ret;
//	char arr[20] = "ABCDEF";
//	char str[20] = "CDEFAB";
//	int len = strlen(arr);
//	strncat(arr, arr, len);
//	ret = strstr(arr, str);
//	if (ret > 0)
//		ret = 1;
//	printf("%d\n", ret);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//1.һ��������ֻ�����������ǳ���һ�Σ� 
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
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
