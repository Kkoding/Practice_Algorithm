//#include <iostream>
//#include <vector>
//#include <string>
//#include <fstream>
//#include <algorithm>
//#include <map>
//#include <unordered_set>
//
//using namespace std;
//
//vector<string> split_string(string);
//
//// Complete the arrayManipulation function below.
//

//////////////////////////////////////////////////
/*
https://www.geeksforgeeks.org/constant-time-range-add-operation-array/
//  C++ program to get updated array after many array range
// add operation
#include <bits/stdc++.h>
using namespace std;

//  Utility method to add value val, to range [lo, hi]
void add(int arr[], int N, int lo, int hi, int val)
{
	arr[lo] += val;
	if (hi != N - 1)
	   arr[hi + 1] -= val;
}

//  Utility method to get actual array from operation array
void updateArray(int arr[], int N)
{
	//  convert array into prefix sum array
	for (int i = 1; i < N; i++)
		arr[i] += arr[i - 1];
}

//  method to print final updated array
void printArr(int arr[], int N)
{
	updateArray(arr, N);
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;
}

//  Driver code to test above methods
int main()
{
	int N = 6;

	int arr[N] = {0};

	//  Range add Queries
	add(arr, N, 0, 2, 100);
	add(arr, N, 1, 5, 100);
	add(arr, N, 2, 3, 100);

	printArr(arr, N);
	return 0;
}

*/
//////////////////////////////////////////////////

///*
//  vector<long> imos(n + 1, 0);
//
//  for (auto query : queries) {
//	size_t a = query[0], b = query[1];
//	int k = query[2];
//
//	imos[a - 1] += k;
//	imos[b] -= k;
//  }
//
//  for (int i = 1; i < n + 1; ++i) {
//	imos[i] += imos[i - 1];
//  }
//
//  return *max_element(imos.begin(), imos.end());
//*/
//long arrayManipulation(int n, vector<vector<int>> queries) {
//
//	vector<long> us(n+1,0);
//
//	for (auto& d : queries) {
//		for (int i = d[0]-1; i < d[1]; ++i)
//			us[i] += d[2];
//	}
//
//
//	return *max_element(us.begin(), us.end());
//
//}
//
//int main()
//{
//
//	string nm_temp;
//	getline(cin, nm_temp);
//
//	vector<string> nm = split_string(nm_temp);
//
//	int n = stoi(nm[0]);
//
//	int m = stoi(nm[1]);
//
//	vector<vector<int>> queries(m);
//	for (int i = 0; i < m; i++) {
//		queries[i].resize(3);
//
//		for (int j = 0; j < 3; j++) {
//			cin >> queries[i][j];
//		}
//
//		cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	}
//
//	long result = arrayManipulation(n, queries);
//
//
//	return 0;
//}
//
//vector<string> split_string(string input_string) {
//	string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
//		return x == y and x == ' ';
//	});
//
//	input_string.erase(new_end, input_string.end());
//
//	while (input_string[input_string.length() - 1] == ' ') {
//		input_string.pop_back();
//	}
//
//	vector<string> splits;
//	char delimiter = ' ';
//
//	size_t i = 0;
//	size_t pos = input_string.find(delimiter);
//
//	while (pos != string::npos) {
//		splits.push_back(input_string.substr(i, pos - i));
//
//		i = pos + 1;
//		pos = input_string.find(delimiter, i);
//	}
//
//	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));
//
//	return splits;
//}
