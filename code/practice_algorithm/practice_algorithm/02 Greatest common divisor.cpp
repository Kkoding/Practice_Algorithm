//Write a program that, given two positive integers, will calculate and print the greatest common divisor of the two.
//
//## 최대 공약수
//두개의 정수가 주어질때 이 두 숫자의 최대공약수 를 구하고 출력하여라.

#include <iostream>

using namespace std;


int main()
{
	int n1, n2;
	cin >> n1 >> n2;

	int answer;
	int mini = (n1 < n2) ? n1 : n2;

	for (int i = 1; i <= mini; i++) {
		if (n1%i == 0 && n2%i == 0)	answer = i;
	}


	cout << answer << endl;


	system("pause");
}