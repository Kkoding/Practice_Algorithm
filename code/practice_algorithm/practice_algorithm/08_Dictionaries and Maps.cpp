#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	// https://stackoverflow.com/questions/9270563/what-is-the-purpose-of-stdmake-pair-vs-the-constructor-of-stdpair
	// what is difference pais vs make_pair

	int count, num;
	string name;
	cin >> count;

	map<string, int> input;
	vector<string> answer;

	while (count > 0) {
		cin >> name >> num;
		input.insert(pair<string, int>(name, num));
		--count;
	}


	while (cin >> name) {
		auto p = input.find(name);
		if (p == input.end()) cout << "Not found" << endl;
		else cout << p->first << "=" << p->second << endl;
	}

	return 0;
}