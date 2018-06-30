#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main()
{
	int i = 4;
	double d = 4.0;
	string s = "HackerRank ";
	// Declare second integer, double, and String variables.
	int i2;
	double d2;
	string s2;

	cin >> i2;
	cin >> d2;
	cin.ignore();
	getline(cin, s2);
	// Read and save an integer, double, and String to your variables.

	// Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

	// Print the sum of both integer variables on a new line.
	cout << i + i2 << endl;
	cout << fixed << setprecision(1) << d + d2 << endl;
	cout << s + s2 << endl;
	// Print the sum of the double variables on a new line.

	// Concatenate and print the String variables on a new line
	// The 's' variable above should be printed first.
	system("pause");

	/*
		cin.ignore()과 getlince의 차이점에 대해서 알아보기.

		fixed setprecision(1)에 대해서 알아보기.
	
	*/

}