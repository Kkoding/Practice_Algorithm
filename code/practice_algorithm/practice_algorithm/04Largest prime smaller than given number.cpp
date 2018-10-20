/*
	Write a program that computes and prints the largest prime number that is smaller than a number provided by the user, which must be a positive integer.

## �־��� ���ھȿ��� ���� ū �Ҽ� ���ϱ�
����ڰ� �Է��� ���ھȿ��� ���� ū �Ҽ� ���ϱ�(�� ���� ��������Ѵ�)

*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	//�����
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