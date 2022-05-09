#include <string>
#include <vector>
#include <map>
using namespace std;
map<string, int> mp;

vector<int> solution(vector<string> gems) {
	vector<int> answer;
	for (auto a : gems) mp[a]++;
	int start = 0, end = 0, min = 1e9, mins = 0, mine = 0;

	for (int i = gems.size() - 1; i >= 0; i--) {
		mp[gems[i]]--;
		if (mp[gems[i]] == 0) {
			end = i;
			mp[gems[i]]++;
			break;
		}
	}
	mins = start;
	mine = end;
	min = end - start;
	while (start <= end) {
		int tar = mp[gems[start]];
		if (tar - 1 != 0) {
			mp[gems[start]]--;
			start++;
			if (end - start < min) {
				min = end - start;
				mins = start;
				mine = end;
			}
		}
		else {
			end++;
			if (end == gems.size()) {
				end--;
				break;
			}
			mp[gems[end]]++;
		}
	}


	answer.push_back(mins + 1);
	answer.push_back(mine + 1);
	return answer;
}