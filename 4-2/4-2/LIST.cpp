#include"LIST.h"
using namespace std;
template<class T>
struct ListNode
{
	ListNode(const T& val = T())
	:_next(nullptr)
	, _prev(nullptr)
	, _data(val)
	{

	}
	ListNode<T>*_next;
	ListNode<T>*_prev;
	T_data;
};
template<class T,class Ref,class Ptr>
struct ListIterator
{
	typedef ListNode<T>* pNode;
	typedef ListIterator<T,Ref,Ptr> self;
	pNode _node;
	ListIterator(pNode node)
		:_node(node)
	{

	}
	//++iterator
	self& operator ++()
	{
		_node = _node->_next;
		return *this;
	}
	//iterator++
	//�ƶ�����һ������λ��
	self operator++(int)
	{
		self tmp(*this);
		_node = _node->_next;
		return tmp;
	}

	//ǰ��--
	self& operator--()
	{
		_node = _node->_prev;
		return *this;
	}
	//����--
	self& operator--(int)
	{
		self tmp(*this);
		_node = _node->_prev;
		return tmp;
	}
	//iterator->
	Ref operator*()
	{
		return &_node->_data;
	}
	//������ *iterator
	//��ȡ�ڵ��data
	Ptr operator->()
	{
		return _node->_data;
	}

	//iterator !=  l.end()
	//�Ƚ�������������װ�Ľڵ��Ƿ�һ��
	bool operator !=(const self& it)
	{
		return _node != it._node;
	}
};
//template<class T>
//struct ConstListIterator
//{
//	typedef ListNode<T>* pNode;
//	typedef ListIterator<T> self;
//	typedef ConstListIterator<T> iterator;
//
//		pNode _node;
//	ListIterator(pNode node)
//		:_node(node)
//	{
//
//	}
//	//++iterator
//	self& operator ++()
//	{
//		_node = _node->_next;
//		return *this;
//	}
//	//iterator++
//	//�ƶ�����һ������λ��
//	self operator++(int)
//	{
//		self tmp(*this);
//		_node = _node->_next;
//		return tmp;
//	}
//
//	//ǰ��--
//	self& operator--()
//	{
//		_node = _node->_prev;
//		return *this;
//	}
//	//����--
//	self& operator--(int)
//	{
//		self tmp(*this);
//		_node = _node->_prev;
//		return tmp;
//	}
//	//iterator->
//	const T* operator->()
//	{
//		return &_node->_data;
//	}
//	//������ *iterator
//	//��ȡ�ڵ��data
//	const T& operator*()
//	{
//		return _node->_data;
//	}
//
//	//iterator !=  l.end()
//	//�Ƚ�������������װ�Ľڵ��Ƿ�һ��
//	bool operator !=(const self& it)
//	{
//		return _node != it._node;
//	}
//};
template <class T>
class List
{
public:
	typedef ListNode<T> Node;
	typedef Node* pNode;
	typedef ListIterator<T, T&, T*> iterator;
	typedef ListIterator<T, const T&, const T*> const_iterator;
	//const���ܵ��÷�const��Ա������ֻ�ܵ���const��Ա����
	//��const��Ա����operator++��operator--�Ͳ����޸�_node��ֵ
	List(const T& val = T())
		:_head(new Node(val))
	{
		_head->_next = _head;
		_head->_prve = _head;
	}
	void PushBack(const T& val)
	{
		pNode prev= _head->_prev;
		prev->_next = curNode;
		curNode->_prev = prev;                       
		_head->_prev = curNode;            
		Isert(end(),val); 
	}
	iterator begin()
	{
		return iterator(_head->_next);
	}

	iterator end()
	{
		return iterator(_head);
	}
	const_iterator begin()const
	{
		return const_iterator(_head->_next);
	}
	const_iterator end()const
	{
		return const_iterator(_haed);
	}
	void Insert(iterator pos,const T& val)
	{
		pNode newnode = new Node(val);
		pNode cur = pos._node;
		pNode prev = cur->_prev;
		prev->_next = newnode;
		newnode->_prev = prev;
		newnode->_next = cur;
		cur->_prev = newnode;
	}
	void PushFront(const T&val)
	{
		Isert(begin(), val);
	}
	//Earse:������ʧЧ
	//��ȡEarse�ķ���ֵ������ǰ��ɾ�ڵ����һ��λ�ã������µ�����
	iterator Earse(iterator pos)
	{
		if (pos != end())
		{

		}
	}
	List(const List<T>& lst)
	{
		_head = new Node;
		_head->_next = _head;
		_head->_prve = _head;
		for (const auto& e : lst)
		{
			PushBack(e);
		}
	}
	List<T>& operator=(List<T> lst)
	{
		swap(_head, lst._head);
		return *this;
	}
private:
	pNode _head;
};
int main()
{
	List <int>lst;
	lst.PushBack(1);
	lst.PushBack(2);
	lst.PushBack(3);
	lst.PushBack(4);
	auto lit = lst.begin();
	while (lit != lst.end())
	{
		cout << *lit << " ";
		cout << endl;
	}
	system("pause");
	return 0;
}