#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����
//��������-->ϣ�����򣨲���������Ż��汾���ٲ�������֮ǰʹ֮�����ܵ����򣻼���������� gap=��gap/3��+1��
//ѡ������ֱ��ѡ�����򡢶�����
void AdjustDown(int array[], int size, int root)
{
	int left = 2 * root + 1;
	int right = 2 * root + 2;
	if (left >=size){
		return;
		}
	    int max = left;
		if (right < size && array[right]>array[left]){
			max = right;
		}
		if (array[max]>array[root]){
			int temp = array[max];
			array[max] = array[root];
			array[root] = temp;
		}
		AdjustDown( array, size, max);
}
//ð������
//��������(�ռ临�Ӷ�O��log n��--O��n��)
//�������������ѡ��һ����׼ֵ����������һ������
//�����������䣬��һЩ�������ﵽЧ�����Ȼ�׼ֵС�ķŵ���׼ֵ���Ȼ�׼ֵ��ķŵ���׼ֵ�Ҳࣻ
//�����㷨����һ������������ͬ����С���⣻
//�����㷨�õݹ飨���߷ǵݹ飩�ݹ����ֹ�㷨�� 
//1���ֳ�����С����û�������ֳ�������size==0��2���ֳ�����С�����Ѿ����򣬷ֳ�������size==1
//Hover��
int Parition(int array[], int left, int right){//��׼ֵ���ң�������
	int begin = left;
	int end = right;//���ܵ���right-1
	//��׼ֵ��array[right];
	while (begin < end){
		//���������
		while (begin < end&&array[begin] <= array[right]){
			begin++;
		}
		//һ������߿�ס��
		//�����ұ�
		while (begin < end&&array[end] >= array[right]){
			end--;
		}
		//�ұ߿�ס��
		Swap(array + begin, array + end);
	}
	Swap(array + begin, array + right);
	return begin;
}
//�ڿӷ�
int Parition(int array[],int left,int right)
{
	int begin = left;
	int end = right;
	int pivot= array[right];
	while (end > begin)
	{
		while (begin < end && array[begin] <= pivot)
		{
			begin++;
		}
		array[end] = array[begin];
		while (begin < end&&array[end] >= pivot){
			end--;
		}
		array[begin] = array[end];
	}
	array[begin] = pivot;
}
//˫ָ�뷨
int Parition(int array[], int left, int right)
{
	int i = left;
	int d = left;
	for (i = left; i < right; i++)
	{

	}
}
//
//�鲢���򣨺ϲ�����
//��һ�����鿴����������С���鼴[left,mid)��[mid,right]
//���������������Ѿ����򣬿��԰�����������ϲ���һ������
//���Զ��ⲿ��������
//
void _MergeSort(int array[], int left, int right)
{

}
void MergeSort(int array[], int size){
	_MergeSort(array, 0, size);
}