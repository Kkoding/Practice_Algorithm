#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int n;
	vector<string> v;
	string s;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		v.push_back(s);
	}


	string s1, s2;

	for (int i = 0; i < v.size(); ++i) {
		auto bg = v[i].begin();
		for (int j = 0; j < v[i].size(); ++j) {
			if (j & 1) s1 += *bg;
			else s2 += *bg;
			++bg;
		}
		cout << s2 << ' ' << s1 << endl;
		s1.clear();
		s2.clear();
	}




	system("pause");
	return 0;
}