#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//1.�������
//int main()
//{
//	int i, j;
//	int line = 0;
//	scanf("%d", &line);
//	for (i = 1; i <= line; i++)
//	{
//		for (j = 1; j <= line - i; j++)
//		{
//			printf(" ");
//
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < line; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * (line - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//2.ˮ�ɻ����ж�
//int main()
//{
//	int x = 0;
//	int ret = 0;
//	int sum = 0;
//	scanf("%d",&x);
//	int y = x;
//	while (y > 0)
//	{
//		ret = y % 10;
//		sum += pow(ret, 3);
//		y = y / 10;
//	}
//	if (x == sum)
//	{
//		printf("%d��ˮ�ɻ���\n",x);
//	}
//	else
//	{
//		printf("%d����ˮ�ɻ���\n", x);
//	}
//	system("pause");
//	return 0;
//}
////3.��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣� 
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int Sn = 0;
//	int S;
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &x, &y);
//	for (i = 0; i < y; i++)
//	{
//		for (j = i - 1; j>=0; j--)
//		{
//			S = x*pow(10, j);
//			Sn += S;
//		}
//		S = x*pow(10, i);
//	    Sn += S;
//	}
//	printf("%d\n", Sn);
//	system("pause");
//	return 0;
//
//}
////1.��������Ϸ
//int main()
//{
//	int x = 0;
//	printf("������1--100֮�������\n");
//	int ret = 0;
//	srand((unsigned)time(NULL));
//	ret =rand() % 100;
//	while (x != ret)
//	{
//		scanf("%d", &x);
//		if (x > ret)
//		{
//			printf("̫����\n");
//		}
//		else if (x < ret)
//		{
//			printf("̫С��\n");
//		}
//
//	}
//	printf("������ȷ\n");
//	system("pause");
//	return 0;
//	
//}
//�۰���ң��ҳ��������������е����������±�
//int main()
//{
//	int start = 0;
//    int end = 0;
//	int x = 0;
//	scanf("%d", &x);
//	int arr[] = { 0, 2,4,6,8,10,12,14,16,18};
//	end = sizeof(arr) / sizeof(arr[0])-1;
//	while (start<end)
//	{
//		if (x > arr[(start + end) / 2])
//		{
//			start = (start + end) / 2-1;
//		}
//		else if (x < arr[(start + end) / 2])
//		{
//			end = (start + end) / 2+1;
//		}
//		else if (x = arr[(start + end) / 2])
//		{
//			printf("%d", (start + end) / 2);
//			break;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (start == end)
//	{
//		printf("-1");
//	}
//	system("pause");
//	return 0;
//}
//�۰���ң������±�
//int main()
//{
//	int i, j, n, k = 0, isFound = 0;
//	int num[] = { 30, 28, 26, 24, 22, 20, 18, 16, 14, 12, 10, 8, 6, 4, 2 };
//	printf("�����һ��������\n");
//	scanf("%d", &n);
//	i = (int)sizeof(num) / sizeof(num[0]) / 2;
//	j = (int)sizeof(num) / sizeof(num[0]) / 2;
//	while (k < 2)
//	{
//		i = (int)i / 2;
//		if (i == 0)
//			k++;
//		if (n<num[j])
//			j = j + (i + 1);
//		else if (n>num[j])
//			j = j - (i + 1);
//		else
//		{
//			isFound = 1;
//			break;
//		}
//	}
//	if (isFound)
//		printf("%d\n", j);
//	else
//		printf("-1\n");
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char i = 0;
//	scanf("%s", &i);
//	if (i <= 90 && i >= 65)
//	{
//		i += 32;
//		printf("%s", i);
//	}
//	else if (i <= 122 && i >= 97)
//	{
//		i -= 32;
//		printf("%s", i);
//	}
//	system("pause");
//	return 0;
//}
int main()

{

	int i;

	char *p= "123456";

	char arr[10];

	for (i = 0;i<3;i++)

	{
		printf("����������:");

		scanf("%s", arr);

		if (strcmp(p, arr) == 0)

		{
			break;
		}
		else 

		{
			printf("�������!\n");
		}
	}
	if (i == 3)
	{
		printf("���������������ϵͳ�رգ�\n");
	}
	else if(i<3)
	{
		printf("��ϲ���¼�ɹ���\n");
	}
	system("pause");
	return 0;

}