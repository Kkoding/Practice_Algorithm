#include <iostream>

using namespace std;



int main()
{
	int N;
	cin >> N;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');


	if (N & 1)	cout << "Weird" << endl;
	else {
		if (N < 6 || 20 < N)cout << "Not Weird" << endl;
		else if (6 < N && N <= 20)cout << "Weird" << endl;
	}


	return 0;
}
