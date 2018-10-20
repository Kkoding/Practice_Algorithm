/*
	Write a program that computes and prints the largest prime number that is smaller than a number provided by the user, which must be a positive integer.

## 주어진 숫자안에서 가장 큰 소수 구하기
사용자가 입력한 숫자안에서 가장 큰 소수 구하기(이 값은 양수여야한다)

*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	//양수만
	int num;
	cin >> num;

	
	int * prime = new int[num];
	for (int i = 0; i < num; ++i) prime[i] = -1;


	for (int i = 2; i <= num; ++i) {
		for (int j = i * 2; j <= num;j+=i ) {
			prime[j] = 0;
		}
	}

	vector<int> v ;
	for (int i = 0; i < num; ++i) {
		if (prime[i] == -1) v.push_back( i );
	}

	int answer = *(max(v.begin(), v.end())-1);


	cout << answer << endl;
	system("pause");





}