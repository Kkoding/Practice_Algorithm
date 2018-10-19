#include <iostream>
#include <vector>
#include <ostream>
#include <fstream>
#include <string>

#include <unordered_set>


using namespace std;

/*
#include <iostream>
#include <iterator>
#include <unordered_set>
using namespace std;

int main() {
	int n, q, i;
	string str;
	unordered_multiset<string> s;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin >> str;
		s.insert(str);
	}
	cin >> q;
	for (i = 0; i < q; ++i) {
		cin >> str;
		cout << s.count(str) << '\n';
	}
}
*/
// Complete the matchingStrings function below.
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {

	vector<int> answer;

	for (auto& qu : queries) 
	{
		int cnt = 0;
		for (auto& st : strings)
		{
			if (qu == st) ++cnt;
		}
		answer.push_back(cnt);
	}
	
	return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strings(strings_count);

    for (int i = 0; i < strings_count; i++) {
        string strings_item;
        getline(cin, strings_item);

        strings[i] = strings_item;
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        string queries_item;
        getline(cin, queries_item);

        queries[i] = queries_item;
    }

    vector<int> res = matchingStrings(strings, queries);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}