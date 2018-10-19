#include <iostream>

using namespace std;

/*
	all the natural numbers divisible by either 3 or 5, up to a given limit entered by the user.
	## 3가 5가 나누어지는 수의 합을 구하여라
	사용자가 입력한 숫자까지 3 또는 5이 나누어지는 수의 합을 출력하여라

*/
int main()
{
	int num;

	cin >> num;

	int sum = 0;
	for (int i = 0; i <= num; ++i)
	{
		if (i % 3 == 0 && i % 5 == 0)sum += i;
	}

	cout << sum;

	system("pause");

}