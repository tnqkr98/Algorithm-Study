// level 1 (ÇØ½Ã)

#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	map<string, int> m;

	for (int i = 0; i < completion.size(); i++) {
		if (m.find(completion[i]) == m.end())
			m.insert(make_pair(completion[i], 1));
		else
			m.find(completion[i])->second++;
	}

	for (int i = 0; i < participant.size(); i++) {
		if (m.find(participant[i]) != m.end()) {
			if (m.find(participant[i])->second - 1 == 0)
				m.erase(participant[i]);
			else
				m.find(participant[i])->second--;
		}
		else {
			answer = participant[i];
			break;
		}
	}
	return answer;
}