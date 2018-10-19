//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//vector<int> solution(int N, vector<int> stages) {
//	vector<int> answer;
//
//	int value = 1;
//
//	vector<pair<int, float>> key_count;		//�ش� �� ���� ����� �� (����� ���̳�, ���� ���� Ƚ��)
//	key_count.clear();
//	unsigned num;
//
//	while (value != N + 1)
//	{
//		num = count(stages.begin(), stages.end(), value);
//		key_count.push_back(make_pair(value, num));
//		++value;
//	}
//
//	//�� N�� ��������
//	value = 1;
//	int map_num = stages.size();
//	vector<pair<int, float>> percent;  //(����� ���̳�, Ƚ�������� �ۼ�Ʈ������)
//	percent.clear();
//
//	for (auto& d : key_count) {
//
//		float f = (d.second / map_num);
//		percent.push_back(make_pair(d.first, f));
//		map_num -= d.second;
//	}
//
//	sort(percent.begin(), percent.end(), [](pair<int, float> a, pair<int, float> b) {
//		if (a.second == b.second) {
//			return a.first < b.first;
//		}
//		return a.second > b.second;
//	});
//
//
//	for (auto& d : percent)
//		answer.push_back(d.first);
//
//
//	return answer;
//}
//
//int main()
//{
//	vector<int> v{ 4,4,3,3,2 };
//	vector<int> ans = solution(5, v);
//
//	for (auto& d : ans)
//		cout << d << endl;
//}