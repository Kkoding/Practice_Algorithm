
/*
Write a program that prints all Armstrong numbers with three digits.
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int f, s, t;

	vector<int> v;

	for (int i = 100; i < 1000; ++i) {
		f = i / 100;
		s = (i % 100) / 10;
		t = (i % 100) % 10;

		if (i == f * f*f + s * s*s + t *t * t)
			v.push_back(i);
		f = 0;
		s = 0;
		t = 0;
	}

	for (auto&d : v)
		cout << d << endl;


	system("pause");



}