#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

void Add(contact *p)
{
	assert(p != NULL);
	printf("����������\n");
	scanf("%s", p->data[p->sz].name);
	printf("����������\n");
	scanf("%d", p->data[p->sz].age);
	printf("�������Ա�\n");
	scanf("%s", p->data[p->sz].sex);
	printf("�������ַ\n");
	scanf("%s", p->data[p->sz].address);
	printf("������绰\n");
	scanf("%s", p->data[p->sz].tel);
}