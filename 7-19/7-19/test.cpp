//#include<iostream>
//#include<vector>
//#include <algorithm>
////�÷��������������ֻ��һ�����������
////int MoreThanHalfNum_Solution(std::vector<int> numbers) {
////	sort(numbers.begin(), numbers.end());
////	int count = 1;
////	int ret = numbers.size() / 2;
////	for (int i = 1; i < numbers.size(); i++)
////	{
////		if (numbers[i] == numbers[i - 1])
////			count++;
////		else
////			count = 1;
////		if (count > ret)
////			return numbers[i];
////	}
////	return 0;
////}
//	int MoreThanHalfNum_Solution(std::vector<int> numbers) {
//		sort(numbers.begin(), numbers.end());
//		int count = 1;
//		int ret = numbers.size() / 2;
//		if (numbers.size() < 2)
//			return numbers[0];
//		for (int i = 1; i < numbers.size(); i++)
//		{
//			if (numbers[i] == numbers[i - 1])
//				count++;
//			else
//				count = 1;
//			if (count > ret)
//				return numbers[i];
//		}
//		return 0;
//	}
//int main()
//{
//	std::vector<int> numbers;
//	numbers = {1,2,3,2,2,2,5,4,2};
//	int n=MoreThanHalfNum_Solution(numbers);
//	std::cout << n << std::endl;
//	return 0;
//}
//�򵥴����¼
#include<iostream>
#include<vector>
#include<string>
int main()
{
	std::vector<std::string> v1;
	std::vector<int> v2;
}