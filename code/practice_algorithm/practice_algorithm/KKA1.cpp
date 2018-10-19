#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> split_string(string input_string) {
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
		return x == y and x == ' ';
	});
	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ') {
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}


vector<string> solution(vector<string> record) {
	vector<string> answer;
	vector<string> temp;

	vector<pair<string, string>> v;
	vector<string> commander;
	// Enter 0  Leave 1 Change 2
	
	for (auto& d : record) {
		temp = split_string(d);
		vector<string>::iterator bg = temp.begin();
		commander.push_back(*bg);
		if ((*bg) == "Enter") {
			++bg;
			string s1 = (*bg);
			++bg;
			string s2 = (*bg);
			v.push_back(make_pair(s1, s2));
		}
		else if ((*bg) == "Leave") {
			++bg;
			string new_name = (*bg);
			string old_name;

			for (auto& d1 : v)
				if (d1.first == new_name) old_name = d1.second;

			v.push_back(make_pair(new_name, old_name));
		}
		else if ((*bg) == "Change") {
			++bg;
			string new_name = (*bg);
			++bg;
			string new_id = (*bg);
			v.push_back(make_pair(new_name, new_id));


			//for (auto& c1 : v)
			//	if (new_name == c1.first) c1.second = new_id;

		}
	}


	vector<pair<string, string>>::iterator value = v.begin();

	for (auto& d : commander) {
		if (d == "Enter") {
			answer.push_back((*value).second + "님이 들어왔습니다.");
			++value;
		}
		else if (d == "Leave") {
			answer.push_back((*value).second + "님이 나갔습니다.");
			++value;
		}
		else if (d == "Change") {
			answer.push_back((*value).second + "님이 들어왔습니다.");
			++value;
		}
	}
	return answer;
}

int main()
{


	vector<string> a{ "Enter uid1234 Muzi",
		"Enter uid4567 Prodo", "Leave uid1234",
		"Enter uid1234 Prodo", "Change uid4567 Ryan"
	};
	//for (auto& d : a)
	//	cout << d << endl;

	vector<string> ans = solution(a);

	for (auto& qwe : ans)
		cout << qwe << endl;

}