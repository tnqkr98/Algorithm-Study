#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer, newarr;

	for (int i = 0; i < commands.size(); i++) {
		for (int j = commands[i][0] - 1; j < commands[i][1]; j++)
			newarr.push_back(array[j]);
		sort(newarr.begin(), newarr.end());
		answer.push_back(newarr[commands[i][2] - 1]);
		newarr.clear();
	}

	return answer;
}