/*
	Write a program that prints the list of all pairs of amicable numbers smaller than 1,000,000.

*/
#include <iostream>
#include <vector>
using namespace std;

#define NUMBER 1000000

int main()
{

	vector<pair<int, int>> vp;


	for (int i = 0; i < NUMBER; ++i) {
		vp.push_back(make_pair(i, 0));
	}


	int first_sum = 0;
	for (int i = 1; i < NUMBER; ++i) {
		// 처음시도        여기에 220이 들어갔다고 가정.
		// f_s sms 284가 된다.
		for (int j = 1; j < i; ++j) {
			if (i == j)break;
			if (i%j == 0) first_sum += j;
		}

		vp[i].second = first_sum;
		first_sum = 0;
	}



	for (int i = 1; i < NUMBER; ++i)
	{
		if (vp[i].first == 0)continue;
		if (vp[i].first == vp[vp[i].second].second && vp[i].second == vp[vp[i].second].first
			&& vp[i].first != vp[i].second) {
			cout << vp[i].first << ' ' << vp[i].second << endl;
			vp[vp[i].second].first = 0;
			vp[i].first = 0;

		}

	}


	system("pause");

}