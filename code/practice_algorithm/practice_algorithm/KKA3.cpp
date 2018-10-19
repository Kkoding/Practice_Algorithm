#include <string>
#include <vector>

#include <set>
#include <algorithm>

using namespace std;


int solution(vector<vector<string>> relation) {
	int answer = 0;

	// 0 학번 , 1 이름, 2 전공, 3 학년

	vector<string> v[4]; bool b[4] = { false ,false ,false ,false };

	set<string> s;
	int value = 0;

	while (value != 4) {
		for (auto& d : relation) {
			v[value].push_back(d[value]);
			s.insert(d[value]);
		}
		if (v[value].size() == s.size()) {
			++answer;
			b[value] = true;
		}
		++value;
		s.clear();
	}

	for (auto& d : relation)
		s.insert(d[0]);

	set<string> temp;
	for (int i = 0; i <3; ++i) {
		if (b[i]) continue;
		for (int j = 0; j < relation.size() ; ++j) {
			
			temp.insert(v[i][j] + v[i + 1][j]);
		}
		if (temp.size() == s.size()) ++answer;
		temp.clear();
	}
	
	return answer;
}

int main()
{
	vector<vector<string>> val
	{
		{"100", "ryan", "music", "2"},
		{"200", "apeach", "math", "2"},
		{"300", "tube", "computer", "3"},
		{"400", "con", "computer", "4"},
		{"500", "muzi", "music", "3"},
		{"600", "apeach", "music", "2"}
	};

	solution(val);

}