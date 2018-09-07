#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
	vector<int> elements;

public:
	int maximumDifference;

	// Add your code here
	Difference(vector<int> v) :elements(v), maximumDifference(0){};

	void computeDifference()
	{
		for (auto& d : elements)
		{
			for (auto& s : elements)
			{
				maximumDifference = max(abs(d - s), maximumDifference);
			}
		}
	}

}; // End of Difference class

int main() {
	int N;
	cin >> N;

	vector<int> a;

	for (int i = 0; i < N; i++) {
		int e;
		cin >> e;

		a.push_back(e);
	}

	Difference d(a);

	d.computeDifference();

	cout << d.maximumDifference;

	return 0;
}