#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main()
{
	float pi = 0;
	int sign = 1;       // �������� 
	float deno = 1;     // ��ĸ
	float item = 1;     // �� 
	// fabs�������ֵ�ĺ�������math.h����������math.c�ж���
	// 1e-6�е�"-"�������಻���пո񣻵ȼ���0.000001��ͬ��1e-3�ȼ���0.001 
	while (fabs(item) >= 1e-6)
	{
		pi += item;
		sign = -sign;   // ���ݹ�ʽ��ÿ����һ��͵ñ䶯һ�������� 
		deno += 2;       // ��ĸÿ�ζ��Լ�2 
		item = sign / deno; // �ڼ����ֵ��������һ�ּ��� 
	}

	pi = 4 * pi;
	printf("pi = %f\n", pi);
	system("pause");
	return 0;
}

