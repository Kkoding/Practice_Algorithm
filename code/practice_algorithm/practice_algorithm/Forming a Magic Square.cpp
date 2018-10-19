//#include <iostream>
//#include <vector>
//#include <set>
//
//using namespace std;
//
///*
//	마방진 https://mindyourdecisions.com/blog/2015/11/08/how-many-3x3-magic-squares-are-there-sunday-puzzle/
//	
//	근데이거는 알고있어야 풀수있는그런거같다.
//
//*/
//
//// Complete the formingMagicSquare function below.
//int formingMagicSquare(vector<vector<int>> s) {
//	set<int> sets;
//	for (auto& st : s) {
//		for (auto& ed : st)
//			sets.insert(ed);
//	}
//	if (9 == sets.size()) return 0;
//
//
//
//
//
//
//}
//
//int main()
//{
//
//	vector<vector<int>> s(3);
//	for (int i = 0; i < 3; i++) {
//		s[i].resize(3);
//
//		for (int j = 0; j < 3; j++) {
//			cin >> s[i][j];
//		}
//
//		cin.ignore(numeric_limits<streamsize>::max(), '\n');
//	}
//
//	int result = formingMagicSquare(s);
//
//
//
//	return 0;
//}
