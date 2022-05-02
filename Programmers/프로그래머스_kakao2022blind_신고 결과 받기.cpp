#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <set>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
	vector<int> answer(id_list.size());
	map<string, int> m, idnum;
	set<string> s;
	for (int i = 0; i < id_list.size(); i++)
		idnum.insert({ id_list[i],i });
	for (auto i : report) {
		int sp = i.find(' ');
		string key = i.substr(0, sp);
		string val = i.substr(sp + 1);
		if (s.find(i) == s.end()) {
			s.insert(i);
			m[val]++;
		}
	}
	for (auto i : s) {
		int sp = i.find(' ');
		string key = i.substr(0, sp);
		string val = i.substr(sp + 1);
		if (m[val] >= k)
			answer[idnum[key]]++;
	}

	return answer;
}