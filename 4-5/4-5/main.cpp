#include<iostream>
#include<stdlib.h>
#include<stack>
#include<vector>
using namespace std;

//deque��˫�˶��У��Ĳ���ʵ��
template<class T,class Ref,class Ptr>
class Iterator
{
public:
	typedef DequeIterator<class T, class Ref, class Ptr> self;
	Ref operator*()
	{
		return *cur;
	}
	self& operator++()
	{
		cur++;
		if (cur == last)
		{
			node++;
			fist = *node;
			cur = fist;
			last = first + bufsiz;
		}
		return *this;
	}
private:
	T* first;
	T* last;
	T** node;
	T* cur;
};
template<class T>
class Deque
{
public:
	iterator begin()
	{
		return _start;
	}
	iterator end()
	{
		return _finish;
	}
private:
	iterator _start;
	iterator _finish;
	T** map;
};

int main()
{
	system("pause");
	return 0;
}
//��Сջ
class MinStack {
public:
	/** initialize your data structure here. */
	MinStack() {

	}

	void push(int x) {
		elem.push(x);
		if (min.empty() || min.top()>=x)
		{
			min.push(x);
		}
	}

	void pop() {
		if (min.top() == elem.top())
		{
			min.pop();
		}
		elem.pop();
	}

	int top() {
		return elem.top();
	}

	int getMin() {
		return min.top();
	}
private:
	stack<int> elem;
	stack<int> min;
};
//ջ�ĵ���ѹ��
class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		size_t psz = pushV.size();
		size_t popsz = popV.size();
		if (psz != popsz)
			return false;
		stack<int> s;
		size_t pushIndex = 0;
		size_t popIndex = 0;
		while (pushIndex<psz)
		{
			s.push(pushV[pushIndex++]);
			while (!s.empty() && s.top() == popV[popIndex])
			{
				s.pop();
				popIndex++;
			}
		}
		return s.empty();
	}

};

//�沨�����ʽ��
//1.��������ջ
//2.��������������ջ��ȡ����������Ҫ�Ĳ�������ȥ����������λ��Ӧ���Ǵ������󣬽������㣬����Ľ������ѹջ
//3.�ظ�1��2
//4.����ջ��Ԫ�أ���Ϊ���ʽ�����ս��
class Solution {
public:
	int evalRPN(vector<string>& tokens) {
		stack<int> s;
		for (int i = 0; i<tokens.size(); i++)
		{
			if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
			{
				int right = s.top();
				s.pop();
				int left = s.top();
				s.pop();
				switch (tokens[i][0])
				{
				case '+':
					s.push(left + right);
					break;
				case '-':
					s.push(left - right);
					break;
				case '*':
					s.push(left*right);
					break;
				case '/':
					s.push(left / right);
					break;
				}
			}
			else
			{
				//����������ѹջ
				s.push(atoi(tokens[i].c_str()));
			}
		}
		return s.top();
	}
};
