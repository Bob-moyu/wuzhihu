#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
// ��ӡ���飬����۲���
void print_array(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

// ð�������㷨
void bubble_sort(int a[], int n)
{
	// j��ʾ�ڼ��ֱȽ�
	for (int j = 0; j < n - 1; j++)
	{
		// i��ʾ���Ƚϵĵڼ���Ԫ��
		for (int i = 0; i < n - 1 - j; i++)
		{
			if (a[i] > a[i + 1])
			{
				a[i] ^= a[i + 1];
				a[i + 1] ^= a[i];
				a[i] ^= a[i + 1];
			}

			// ��ӡÿһ�ֱȽϣ�ÿ�ν�����Ľ��
			print_array(a, n);
		}
		printf("********************\n");
	}
}

int main()
{
	int a[] = { 5, 4, 3, 2, 1 };
	int count = sizeof(a) / sizeof(int); // ������Ԫ�ظ���
	bubble_sort(a, count);
	system("pause");
	return 0;
}