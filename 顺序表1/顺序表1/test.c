#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"
#include <stdio.h>
int main()
{
	SeqList seq;
	SeqListInit(&seq);//��ʼ��
	SeqListPrint(&seq);//��ӡ
	SeqListPushBack(&seq, 3);//β��
	SeqListPushBack(&seq, 2);
	SeqListPushBack(&seq, 5);
	SeqListPushBack(&seq, 1);
	SeqListPushBack(&seq, 1);
	SeqListPopBack(&seq);//βɾ
	SeqListPushFront(&seq, 1);//ͷ��
	SeqListPushFront(&seq, 0);
	SeqListPushFront(&seq, 9);
	SeqListPopFront(&seq);//ͷɾ
	SeqListInsert(&seq, 2, 6);//����λ�ò���
	SeqListErase(&seq, 0);//����λ��ɾ��
	SeqListPrint(&seq);//��ӡ
	printf("%d\n", SeqListFind(&seq, 6));//����˳�����ֵΪdata��Ԫ�ص�λ��
	SeqListRemove(&seq, 2);//�Ƴ�˳����е�һ��ֵΪdata��Ԫ��
	SeqListPrint(&seq);//��ӡ
	SeqListRemoveAll(&seq, 1);//�Ƴ�˳���������ֵΪdata��Ԫ��
	SeqListPrint(&seq);//��ӡ
	printf("%d\n", SeqListSize(&seq));//��ȡ˳�����ЧԪ�صĸ���
	printf("%d\n", SeqListCapacity(&seq));//��ȡ˳��������
	printf("%d\n", SeqListEmpty(&seq));//���˳����Ƿ�Ϊ��
	printf("%d\n", SeqListFront(&seq));//��ȡ˳����еĵ�һ��Ԫ��
	printf("%d\n", SeqListBack(&seq));//��ȡ˳����е����һ��Ԫ��
	SeqListDestory(&seq);//����
	return 0;
}