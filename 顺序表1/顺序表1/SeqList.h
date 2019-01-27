#ifndef __SeqList_H__
#define __SeqList_H__
#define TURE 1;
#define FALSE 0;
typedef int DataType;//������������
typedef struct SeqList
{
	DataType* array;//�洢����Ϣ
	int size;//��Ч��Ԫ�ظ���
	int capacity;//����
}SeqList, *PSeqList;
void SeqListInit(PSeqList ps);//��ʼ��
void SeqListPrint(PSeqList ps);//��ӡ
void CheakCapacity(PSeqList ps);//����Ƿ�����������
void SeqListPushBack(PSeqList ps, DataType data);//β��
void SeqListPopBack(PSeqList ps);//βɾ
void SeqListPushFront(PSeqList ps, DataType data);//ͷ��
void SeqListPopFront(PSeqList ps);//ͷɾ
void SeqListInsert(PSeqList ps, int pos, DataType data);//����λ�ò���
void SeqListErase(PSeqList ps, int pos);//������λ��ɾ��
int SeqListFind(PSeqList ps, DataType data);//����˳�����ֵΪdata��Ԫ�ص�λ��
void SeqListRemove(PSeqList ps, DataType data);//�Ƴ�˳����е�һ��ֵΪdata��Ԫ��
void SeqListRemoveAll(PSeqList ps, DataType data);//�Ƴ�˳���������ֵΪdata��Ԫ��
int SeqListSize(PSeqList ps);//��ȡ˳�����ЧԪ�صĸ���
int SeqListCapacity(PSeqList ps);//��ȡ˳��������
int SeqListEmpty(PSeqList ps);//���˳����Ƿ�Ϊ��
DataType SeqListFront(PSeqList ps);//��ȡ˳����еĵ�һ��Ԫ��
DataType SeqListBack(PSeqList ps);//��ȡ˳����е����һ��Ԫ��
void SeqListDestory(PSeqList ps);//���������ʼ���ɶԳ��֣�
#endif//__SeqList_H__