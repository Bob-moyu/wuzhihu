#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void SeqListInit(PSeqList ps)
{
	assert(ps);//����
	ps->array = (DataType*)malloc(sizeof(DataType)* 10);
	if (ps->array == NULL)//���ٿռ�ʧ��
	{
		//assert(0);
		return;
	}
	ps->capacity = 10;
	ps->size = 0;
}
void SeqListPrint(PSeqList ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d", ps->array[i]);
	}
	printf("\n");
}
void CheakCapacity(PSeqList ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity * 2;//�����µ�����
		DataType* PTemp = (DataType*)malloc(sizeof(DataType)*newcapacity);//����
		if (PTemp == NULL)
		{
			assert(0);
			return;
		}
		//����Ԫ��
		memcpy(PTemp, ps->array, ps->size*sizeof(DataType));
		//�ͷžɵĿռ�
		free(ps->array);
		ps->array = PTemp;
		ps->capacity = newcapacity;
	}
}
void SeqListPushBack(PSeqList ps, DataType data)
{
	assert(ps);
	CheakCapacity(ps);//����Ƿ�����������
	ps->array[ps->size] = data;
	ps->size++;
}
void SeqListPopBack(PSeqList ps)
{
	assert(ps);
	if (0 == ps->size)
	{
		printf("˳���Ϊ�գ�û�п�ɾ������\n");
		return;
	}
	ps->size--;
}
void SeqListPushFront(PSeqList ps, DataType data)
{
	assert(ps);
	CheakCapacity(ps);//����Ƿ�����������
	int i = 0;
	for (i = ps->size; i > 0; i--)
	{
		ps->array[i] = ps->array[i - 1];
	}
	ps->array[0] = data;
	ps->size++;
}
void SeqListPopFront(PSeqList ps)
{
	assert(ps);
	if (0 == ps->size)
	{
		printf("˳���Ϊ�գ�û�п�ɾ������\n");
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		ps->array[i] = ps->array[i + 1];
	}
	ps->size--;
}
void SeqListInsert(PSeqList ps, int pos, DataType data)
{
	assert(ps);
	if (pos<0 || pos>ps->size)
	{
		printf("����Ԫ�طǷ�����Ч\n");
		return;
	}
	CheakCapacity(ps);//����Ƿ�����������
	int i = 0;
	for (i = ps->size; i > pos; i--)
	{
		ps->array[i] = ps->array[i - 1];
	}
	ps->array[pos] = data;
	ps->size++;
}
void SeqListErase(PSeqList ps, int pos)
{
	assert(ps);
	if (pos < 0 || pos >= ps->size)
	{
		printf("ɾ���������\n");
		return;
	}
	if (0 == ps->size)
	{
		printf("˳���Ϊ��,û�п���ɾ������\n");
		return;
	}
	int i = 0;
	for (i = pos; i < ps->size - 1; i++)
	{
		ps->array[i] = ps->array[i + 1];//ע�⣺���ﲻ����i-1=i�������͵�
	}
	ps->size--;
}
int SeqListFind(PSeqList ps, DataType data)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->array[i] == data)
		{
			return i;
		}
	}
	printf("���ҵ������\n");
	return -1;
}
void SeqListRemove(PSeqList ps, DataType data)
{
	assert(ps);
	int ret = SeqListFind(ps, data);
	int i = 0;
	if (ret != -1)
	{
		SeqListErase(ps, ret);
		return;
	}
	else
		printf("�Ƴ��������\n");
	return;
}
void SeqListRemoveAll(PSeqList ps, DataType data)
{
	assert(ps);
	int i = 0;
	int j = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->array[i] == data)
		{
			j = i;
			SeqListErase(ps, j);
		}
	}
}
int SeqListSize(PSeqList ps)
{
	assert(ps);
	return ps->size;
}
int SeqListCapacity(PSeqList ps)
{
	assert(ps);
	return ps->capacity;
}
int SeqListEmpty(PSeqList ps)
{
	assert(ps);
	if (ps->size == 0)
		return TURE;
	return FALSE;
}
DataType SeqListFront(PSeqList ps)
{
	DataType ret = 0;
	ret = ps->array[0];
	return ret;
}
DataType SeqListBack(PSeqList ps)
{
	DataType ret = 0;
	ret = ps->array[ps->size - 1];
	return ret;
}
void SeqListDestory(PSeqList ps)
{
	assert(ps);
	if (ps->array)
	{
		free(ps->array);
		ps->array = NULL;
		ps->size = 0;
		ps->capacity = 0;
		printf("�����ɹ�\n");
	}
}