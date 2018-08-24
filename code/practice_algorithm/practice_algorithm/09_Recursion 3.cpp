#include <iostream>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {
	if (1 == n) return n;
	return factorial(n - 1) * n;
}

int main()
{

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int result = factorial(n);

	cout << result << endl;


	return 0;
}