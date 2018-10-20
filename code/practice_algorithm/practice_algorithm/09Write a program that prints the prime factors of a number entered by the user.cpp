/*
	Write a program that prints the prime factors of a number entered by the user.

	¼ÒÀÎ¼ö
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;

	vector<int> v;

	cin >> n;

	int answer = n;

	for (int i = 2; i < n; ++i){
		if (answer%i == 0) {
			answer /= i;
			v.push_back(i);
			i = 1;
		}

		if (answer == 1) break;
	}

	for (auto&d : v)
		cout << d << ' ';


}