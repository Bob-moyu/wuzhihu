#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
////�ַ��������һ�����ʵĳ���
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		size_t pos = s.rfind(' ');
//		cout << s.size() - pos - 1 << endl;
//	}
//	return 0;
//}
//class Solution {
//public:
//	bool isNumberOrChar(char ch)
//	{
//		return ((ch >= 'a'&&ch <= 'z')
//			|| (ch >= 'A'&&ch <= 'Z')
//			|| (ch >= '0'&&ch <= '9'));
//
//	}
//	bool isPalindrome(string s) {
//		if (s.empty())
//			return true;
//		int begin = 0, end = s.size() - 1;
//		while (begin<end)
//		{
//			while (begin<end&&!isNumberOrChar(s[begin]))
//				++begin;
//			while (begin<end&&!isNumberOrChar(s[end]))
//				--end;
//			if (s[begin] % 32 != s[end] % 32)
//			{
//				return false;
//			}
//			else
//			{
//				++begin;
//				--end;
//			}
//		}
//		return true;
//	}
//};
//
//int main()
//{
//	cout << Solution().isPalindrome("0P") << endl;
//	system("pause");
//	return 0;
//}
////��֤���Ĵ�������һ���ַ�������֤���Ƿ��ǻ��Ĵ���ֻ������ĸ�������ַ������Ժ�����ĸ�Ĵ�Сд����
//��һ��
//class Solution {
//public:
//	bool isNumberOrChar(char ch)
//	{
//		return ((ch >= 'a'&&ch <= 'z')
//			|| (ch >= 'A'&&ch <= 'Z')
//			|| (ch >= '0'&&ch <= '9'));
//
//	}
//	bool isPalindrome(string s) {
//		if (s.empty())
//			return true;
//		int begin = 0, end = s.size() - 1;
//		while (begin<end)
//		{
//			while (begin<end&&!isNumberOrChar(s[begin]))
//				++begin;
//			while (begin<end&&!isNumberOrChar(s[end]))
//				--end;
//			if ((s[begin] + 32 - 'a') % 32 != (s[end] + 32 - 'a') % 32)
//			{
//				return false;
//			}
//			else
//			{
//				++begin;
//				--end;
//			}
//		}
//		return true;
//	}
//};
//�ڶ���
//class Solution {
//public:
//	bool isNumberOrChar(char ch)
//	{
//		return ((ch >= 'a'&&ch <= 'z')
//			|| (ch >= 'A'&&ch <= 'Z')
//			|| (ch >= '0'&&ch <= '9'));
//
//	}
//	bool isPalindrome(string s) {
//		if (s.empty())
//			return true;
//		for (auto& c : s)
//		{
//			if (c >= 'A'&&c <= 'Z')
//			{
//				c += 32;
//			}
//		}
//		int begin = 0, end = s.size() - 1;
//		while (begin<end)
//		{
//			while (begin<end&&!isNumberOrChar(s[begin]))
//				++begin;
//			while (begin<end&&!isNumberOrChar(s[end]))
//				--end;
//			if (s[begin] != s[end])
//			{
//				return false;
//			}
//			else
//			{
//				++begin;
//				--end;
//			}
//		}
//		return true;
//	}
//};