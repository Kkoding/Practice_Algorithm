#include <iostream>
#include <algorithm>


using namespace std;



int main()
{
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int cnt = 0, max_cnt = 0;

	while (n)
	{
		const unsigned res = n % 2;
		cnt = (cnt + res) * res;
		max_cnt = max(cnt, max_cnt);
		n >>= 1;
	}

	cout << max_cnt << endl;
	return 0;
}