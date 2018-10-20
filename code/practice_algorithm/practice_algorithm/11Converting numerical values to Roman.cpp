#include <iostream>
#include <vector>
#include <string>
/*
		Write a program that,
		given a number entered by the user,
		prints its Roman numeral equivalent.

		단 5000미만의 수.
		I	1
		IV	4
		V	5
		IX	9
		X	10
		XL	40
		L	50
		XC	90
		C	100
		CD	400
		D	500
		CM	900
		M	1000
*/

enum Roman {
	I = 1, IV = 4, V = 5, IX = 9,

	X = 10, XL = 40, L = 50, XC = 90,

	C = 100, CD = 400, D = 500, CM = 900,

	M = 1000


};
using namespace std;

/*
	1	5	10	50	100	500	1000
	I	V	X	L	C	D	M

*/


int main()
{
	int n;
	cin >> n;

	vector<string> v;

	while (n > 0) {

		if (n >= 1000) {
			n -= 1000;
			v.push_back("M");
		}
		else if (n >= 100) {
			if (n >= 900) {
				n -= 900;
				v.push_back("CM");
			}
			else if (n >= 500) {
				n -= 500;
				v.push_back("D");
			}
			else if (n >= 400) {
				n -= 400;
				v.push_back("CD");
			}
			else if (n >= 100) {
				n -= 100;
				v.push_back("C");
			}
		}
		else if (n >= 10) {
			if (n >= 90) {
				n -= 90;
				v.push_back("XC");
			}
			else if (n >= 50) {
				n -= 50;
				v.push_back("L");
			}
			else if (n >= 40) {
				n -= 40;
				v.push_back("XL");
			}
			else if (n >= 10) {
				n -= 10;
				v.push_back("X");

			}
		}
		else {
			//	I = 1, IV = 4, V = 5, IX = 9,
			if (n >= 9) {
				n -= 9;
				v.push_back("IX");
			}
			else if (n >= 5) {
				n -= 5;
				v.push_back("V");
			}
			else if (n >= 4) {
				n -= 4;
				v.push_back("IV");
			}
			else {
				n -= 1;
				v.push_back("I");
			}

		}

	}






	for (auto&d : v)
		cout << d;
	cout << endl;

}