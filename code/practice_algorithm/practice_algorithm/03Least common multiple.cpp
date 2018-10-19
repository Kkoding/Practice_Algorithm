
/*
Write a program that will, given two or more positive integers, calculate and print the least common multiple of them all.

## 최소 공배수
두개 이상의 숫자의 최소 공배수를 계산하고 출력하여라

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int num;
	cin >> num;

	vector<int> v;
	int n;
	for (int i = 0; i < num; ++i) {
		cin >> n;
		v.push_back(n);
	}

	int answer = v[0];
	int temp;

	int mini;
	int maxi;

	

	for (int i = 0; i < v.size(); ++i) {
		mini = v[i] < answer ? v[i] : answer;
		maxi = v[i] > answer ? v[i] : answer;


		for (int j = 1; j <= mini; j++) {
			if (mini%j == 0 && maxi%j == 0)	temp = j;
		}

		answer = (mini*maxi) / temp;
	}

	cout << answer << endl;

	system("pause");

}