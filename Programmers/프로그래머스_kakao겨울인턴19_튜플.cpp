#include <string>
#include <vector>
using namespace std;

vector<int> solution(string s) {
	vector<int> answer;
	vector<pair<int, vector<int>>> v;
	for (int i = 2; i < s.size() - 1; i++) {
		vector<int> sub;
		int end = s.find('}', i);

		for (int j = i; j < end; j++) {
			int idx1 = s.find(',', j);
			int idx2 = s.find('}', j);
			if (idx1 < idx2 && idx1 != -1) {
				sub.push_back(stoi(s.substr(j, idx1 - 1)));
				j = idx1;
			}
			else if (idx1 > idx2 || idx1 == -1) {
				sub.push_back(stoi(s.substr(j, idx2 - 1)));
				break;
			}
		}
		v.push_back(make_pair(sub.size(), sub));

		i = end + 2;
	}


	return answer;
}