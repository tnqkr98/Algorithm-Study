#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

vector<int> solution(string msg) {
	vector<int> answer;
	map<string, int>m;
	int idx = 1;
	string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (idx = 1; idx <= 26; idx++)
		m.insert(make_pair(s.substr(idx - 1, 1), idx));
	for (int i = 0; i < msg.size();) {
		string key = "";
		for (int j = i; j < msg.size(); j++) {
			key += msg[j];
			if (m.find(key) != m.end())
				continue;
			else {
				m.insert(make_pair(key, idx++));
				key.pop_back();
				break;
			}
		}
		i += key.size();
		answer.push_back(m.find(key)->second);
	}
	return answer;
}