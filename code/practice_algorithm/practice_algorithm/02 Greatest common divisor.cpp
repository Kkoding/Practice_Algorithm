//Write a program that, given two positive integers, will calculate and print the greatest common divisor of the two.
//
//## �ִ� �����
//�ΰ��� ������ �־����� �� �� ������ �ִ����� �� ���ϰ� ����Ͽ���.

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