/*
	Write a program that determines and prints
	which number up to 1 million produces the longest Collatz sequence and what its length is.
*/

#include <iostream>

using namespace std;

int main()
{

	long cnt = 0;
	long max = 0;
	int n;
	long long temp[1000000];
	
	for (int i = 1; i < 1000000; ++i) {
		n = i;
		while (n != 1)
		{
			if (n & 1) {
				n = n * 3 + 1;
				++cnt;
			}
			else {
				n /= 2;
				++cnt;
			}

		}
		if (cnt > max) {
			max = cnt;
		}
		cnt = 0;
	}


	cout << max << endl;



}