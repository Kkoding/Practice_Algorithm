#include <iostream>

using namespace std;

/*
	all the natural numbers divisible by either 3 or 5, up to a given limit entered by the user.
	## 3�� 5�� ���������� ���� ���� ���Ͽ���
	����ڰ� �Է��� ���ڱ��� 3 �Ǵ� 5�� ���������� ���� ���� ����Ͽ���

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