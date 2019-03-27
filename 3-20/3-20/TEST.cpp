#include<iostream>
#include<stdlib.h>
#include<mutex>
using namespace std;
//char * TestAuto() 
//{ 
//	return nullptr;
//}
//
//int main() 
//{
//	int a = 10; 
//	auto b = a;
//	auto c = 'a'; 
//	auto d = TestAuto();
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl; 
//	cout << typeid(d).name() << endl;
//	//auto e; �޷�ͨ�����룬ʹ��auto�������ʱ���������г�ʼ�� 
//	system("pause");
//	return 0;
//}
//void TestFor()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (auto& e:array)
//	{
//		e *= 2;
//	}
//	for (auto e : array) 
//		cout << e << " ";
//	cout << endl;
//}
//int main()
//{
//	TestFor();
//	system("pause");
//	return 0; 
//}
//int main()
//{
//	int x = 10;
//	auto a = &x;
//	auto* b = &x;
//	auto & c = x;
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name()<< endl;
//	cout << typeid(c).name()<< endl;
//	*a = 20;
//	*b = 30;
//	c = 40;
//	system("pause");
//	return 0;
//}
//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//int main()
//{
//	f(0);
//	f(nullptr);
//	f((int *)nullptr);
//	system("pause");
//	return 0;
//}
//���һ���ֻ࣬���ڶ��ϴ�������
//class HeapType
//{
//public:
//	static HeapType* GetHeapObj()
//	{
//		return new HeapType;
//	}
//private:
//	HeapType()
//	{
//
//	}
//	ֻ��������ʵ�֡�ʵ�ֿ��ܻ���鷳��������Ҫ��
//	������˽��
//	HeapType(const HeapType& ht);
//};
//int main()
//{
//	HeapType* p1 = HeapType::GetHeapObj();
//	HeapType obj3(*p1);
//	HeapType obj1;
//	system("pause");
//	return 0;
//}
//���һ���ֻ࣬����ջ�ϴ�������
//class StackType
//{
//public:
//	static StackType GetStackObj()
//	{
//		StackType ojb;
//		return ojb;
//	}
//	void Print()
//	{
//		cout << "StackType::Print()" << endl;
//	}
//private:
//	StackType()
//	{
//
//	}
//};
//int main()
//{
//	StackType::GetStackObj().Print();
//	StackType obj = StackType::GetStackObj();
//	obj.Print();
//	system("pause");
//	return 0;
//}
//����ģʽ
//class Singleton
//{
//public:
//	Singleton* GetInstance()
//	{
//		return &_sInstance;
//	}
//private:
//���캯��˽��
//	Singleton()
//	{
//
//	}
//	//������
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&)=delete;
//	static Singleton _sInstance;
//};
//�ڳ������֮ǰʵ�ֶ���ĳ�ʼ��
//Singleton Singleton ::_sInstance;
//int main()
//{
//	//Singleton copy(*Singleton::GetInstance());
//	system("pause");
//	return 0;
//}
//����ģʽ
//�ŵ㣺��һ��ʹ��ʵ������ʱ����������
//ȱ�㣺����
class Singleton
{
public:
	static Singleton* GetInstance()
	{
		if (_spInstance == nullptr)
		{
			_smtx.lock();
			if (_spInstance == nullptr)
			{
				_spInstance = new Singleton;
			}
			_smtx.unlock();
		}
		return _spInstance;
	}
	class CGarbo
	{
	public:
		~CGarbo()
		{
			if (_spInstance)
			{
				delete _spInstance;
			}
		}
	};
private:
	//���캯��˽�л�
	Singleton()
	{
		cout << "Singleton()" << endl;
	}
	~Singleton()
	{
		cout << "~Singleton()" << endl;
	}
	//	//������
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&)=delete;
	static Singleton* _spInstance;
	static mutex _smtx;
	static CGarbo _sgc;
};
mutex Singleton::_smtx;
Singleton::CGarbo Singleton::_sgc;
Singleton* Singleton::_spInstance = nullptr;

////�߳���ʾ
#include<thread>
void func(int n)
{
	cout << Singleton::GetInstance() << endl;
}
int main()
{
	thread t1(func,10);
	thread t2(func,10);
	
	t1.join();
	t2.join();
	
	cout << Singleton::GetInstance() << endl;
	cout << Singleton::GetInstance() << endl;

	system("pause");
	return 0;

