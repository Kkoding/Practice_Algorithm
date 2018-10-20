/*
	Write a program that displays the normal binary representations,
	Gray code representations, and decoded Gray code values for all 5-bit numbers.

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n = 15;	//0000 0101

	vector<int> v;
	vector<int> gray_answer;
	vector<int> originla_answer;
	while (n != 0)
	{
		v.push_back(n & 1);
		n = n >> 1;
	}
	v.push_back(0);

	reverse(v.begin(), v.end());

	/////////////////
	gray_answer.push_back(v[0]);

	for (int i = 0; i < v.size()-1; ++i) {
		gray_answer.push_back(v[i] ^ v[i + 1]);
	}

	
	cout << n << "ÀÇ Gray Code : ";
	for (auto&d : gray_answer)
		cout << d << ' ';
	cout << endl;


	originla_answer.push_back(gray_answer[0]);

	for (int i = 0; i < v.size() - 1; ++i) {
		originla_answer.push_back(originla_answer[i] ^ gray_answer[i + 1]);
	}

	cout << n << "ÀÇ Original Code : ";
	for (auto&d : originla_answer)
		cout << d << ' ';
	cout << endl;


}