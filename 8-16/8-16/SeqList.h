#include<stdbool.h>
#include<stdlib.h>
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* array; // ָ��̬���ٵ�����
	size_t size; // ��Ч���ݸ���
	size_t capicity; // �����ռ�Ĵ�С
}SeqList;
// ������ɾ��Ľӿ�
void SeqListInit(SeqList* seqlist, size_t capacity);
void SeqListDestory(SeqList* seqlist);
void CheckCapacity(SeqList* seqlist);
void SeqListPushBack(SeqList* seqlist, SLDataType value);
void SeqListPopBack(SeqList* seqlist);
void SeqListPushFront(SeqList* seqlist, SLDataType value);
void SeqListPopFront(SeqList* seqlist);
int SeqListFind(SeqList* seqlist, SLDataType value);
void SeqListInsert(SeqList* seqlist, size_t pos, SLDataType value);
void SeqListErase(SeqList* seqlist, size_t pos);
void SeqListRemove(SeqList* seqlist, SLDataType value);
void SeqListModify(SeqList* seqlist, size_t pos, SLDataType value);
void SeqListPrint(SeqList* seqlist);
// ��չ������ʵ��
void SeqListBubbleSort(SeqList* seqlist);
int SeqListBinaryFind(SeqList* seqlist, SLDataType value);
// ����Ҫ��ʱ�临�Ӷȣ�O(N) �ռ临�Ӷ� O(1)
void SeqListRemoveAll(SeqList* seqlist, SLDataType value);