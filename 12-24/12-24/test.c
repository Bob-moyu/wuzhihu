#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int num1, num2, max;
	printf("Please input 2 numbers, separated by space: ");
	scanf("%d %d", &num1, &num2);

	// ��0������Ϊѭ������������ 
	while (num1 > 0 && num2 > 0)
	{
		max = num1 > num2 ? num1 : num2;
		printf("max = %d\n", max);
		printf("Please input 2 numbers, separated by space: ");
		scanf("%d %d", &num1, &num2);
	}
	system("pause");
	return 0;
}
