#include<iostream>
#include<mutex>
#include<stdlib.h>
using namespace std;
////���ýṹ��Ķ�����
//#pragma pack(16)
//typedef struct
//{
//	int a;
//	char c;
//	double b;
//}A;
////�ָ�������ΪĬ��
//#pragma pack()
//int main()
//{
//	cout << sizeof(A) << endl;
//	system("pause");
//	return 0;
//}
//Ԥ����ָ��
//#define //һ�㶨���������꺯��
//#include//һ��ָͷ�ļ��İ���:<>�������ļ���" "�����Զ����ͷ�ļ�
//#if #else #endif//��������
//#error //���������������ʹ�������Լ�Ԥ�ڵı���
//#endif // #else #endif//��������
////����ģʽ֮����ģʽ
//class Singleton
//{
//public:
//	volatile static Singleton* GetIncetance()
//	{
//		if (_a == nullptr)
//		{
//			_mutex.lock();
//			if (_a == nullptr)
//			{
//				_a = new Singleton();
//			}
//			_mutex.unlock();
//		}
//		return _a;
//	}
//	class Garbage
//	{
//		~Garbage()
//		{
//			if (Singleton::_a != nullptr)
//				delete Singleton::_a;
//		}
//	};
//	static Garbage ga;
//private:
//	Singleton(){}
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//	volatile static Singleton* _a;
//	static mutex _mutex;
//};
//Singleton::Garbage ga;
//volatile Singleton* Singleton::_a = nullptr;
//mutex Singleton::_mutex;
////����ģʽ֮����ģʽ
//class Singleton
//{
//public:
//	static Singleton* GetIncetance()
//	{
//		return &_a;
//	}
//private:
//	Singleton(){}
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//	static Singleton _a;
//};
//Singleton Singleton::_a;
////����������
//class ListNode
//{
//public:
//	ListNode* next;
//	int data;
//};
//ListNode* ListNodeReverse(ListNode* Head)
//{
//	if (Head != nullptr && Head->next != nullptr)
//	{
//		ListNode* cur = Head;
//		ListNode* pre = nullptr;
//		while (cur != nullptr)
//		{
//			ListNode*p = cur;
//			cur = cur->next;
//			p->next = pre;
//			pre = p;
//		}
//		return pre;
//	}
//	else
//	{
//		return Head;
//	}
//}
//��������
//int partion(int arr[], int left, int right)
//{
//	int i = left, j = right;
//	int key = left;
//	while (i < j)
//	{
//		while (i < j && arr[j] >= arr[key])
//			j--;
//		while (i < j && arr[i] < arr[key])
//			i++;
//		if (i < j)
//			swap(arr[i], arr[j]);
//	}
//	swap(arr[i], arr[key]);
//	return i;
//}
//void QuickSort(int arr[], int left, int right)
//{
//	if (left < right)
//	{
//		int div = partion(arr, left, right);
//		QuickSort(arr, left, div - 1);
//		QuickSort(arr, div + 1, right);
//	}
//}