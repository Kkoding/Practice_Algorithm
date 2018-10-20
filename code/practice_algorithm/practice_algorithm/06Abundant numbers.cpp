/*
Write a program that prints all abundant numbers and their abundance, up to a number entered by the user.

## ���׼� ���ϱ�
����ڰ� �Է��� ���ڱ��� ���׼��� ���ϱ�
[���׼���](https://ko.wikipedia.org/wiki/%EA%B3%BC%EC%9E%89%EC%88%98)

*/

#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int num;
	cin >> num;


	vector<int> v;


	int sum = 0;
	for (int i = 2; i <= num; ++i) {
		for (int j = 1; j < i; ++j) {
			if (i%j == 0) sum += j;
		}
		if (sum > i) v.push_back(i);
		sum = 0;
	}

	cout << v.size();


}