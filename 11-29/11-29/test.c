#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//////���ز����������� 1 �ĸ���
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//		value = value&(value - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int value = 0;
//	scanf("%d", &value);
//	printf("%d\n", count_one_bits(value));
//	system("pause");
//	return 0;
//}
//д��һ���������ز�����������1�ĸ�����n>>&1==1(count++):���ư�λ��1��ʮһ����������һ������count��whileѭ�����Ӹ�Ч��
//while(n)
//{
//	n = n&(n - 1);//��ʾ�ӵ�λ����λ��һ�γ���1��λ��Ϊ0��
//	count++;
//}
////2.��ȡһ�������������������е�ż��λ������λ�� 
////�ֱ�������������С�
//int main()
//{
//	unsigned int x = 0;
//	int i = 0;
//	int arr[32] = { 0 };
//	scanf("%d", &x);
//	int c = x;
//	for (i = 0; x != 0; i++)
//	{
//		arr[i] = x % 2;
//		x = x / 2;
//	}
//	printf("%d�Ķ�����ż��λ�ǣ�", c);
//	for (i = 31; i >= 0; i-= 2)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	printf("%d�Ķ���������λ�ǣ�", c);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
////4.����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
////��������:
////1999 2299
////������� : 7
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int i = 0;
//	int ret = 0;
//	int count=0;
//	int arr[32] = { 0 };
//	scanf("%d %d", &x, &y);
//	ret = x^y;
//	for (i = 0; ret != 0; i++)
//	{
//		arr[i] = ret % 2;
//		ret/=2;
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (arr[i] == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d��%d�����Ʊ���У���%d��λ(bit)��ͬ\n", x, y, count);
//	system("pause");
//	return 0;
//}