/*
Write a program that prints all the sexy prime pairs up to a limit entered by the user.

## 섹시 소수 쌍을 구하기
사용자가 입력한 숫자까지 모든 섹시 소수를 구하여라
[섹시 소수란](https://ko.wikipedia.org/wiki/%EC%84%B9%EC%8B%9C_%EC%86%8C%EC%88%98)

*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
	int num;
	cin >> num;


	int * prime = new int[num];
	for (int i = 0; i < num; ++i) prime[i] = -1;


	for (int i = 2; i <= num; ++i) {
		for (int j = i * 2; j <= num; j += i) {
			prime[j] = 0;
		}
	}

	set<int> s;
	for (int i = 0; i < num; ++i) {
		if (prime[i] == -1) s.insert(i);
	}
	s.erase(0);
	s.erase(1);
	int cnt = 0;
	for (auto& d : s)
	{
		if (s.find(d + 6) != s.end()) cnt++;
	}

	cout << cnt << endl;

}