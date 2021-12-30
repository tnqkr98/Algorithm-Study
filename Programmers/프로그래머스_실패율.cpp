#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct { int go, unclear; } stage;
bool cmp(const pair<double, int> &a, const pair<double, int> &b) {
	if (a.first != b.first)
		return a.first > b.first;
	else
		return a.second < b.second;

}
vector<int> solution(int N, vector<int> stages) {
	vector<int> answer;
	vector<pair<double, int>> v;
	stage s[501] = { 0 };
	for (int i = 0; i < stages.size(); i++) {
		if (stages[i] != N + 1) {
			for (int j = 1; j <= stages[i]; j++)
				s[j].go++;
			s[stages[i]].unclear++;
		}
		else
			for (int j = 1; j <= N; j++)
				s[j].go++;
	}
	for (int i = 1; i <= N; i++)
		if (s[i].go != 0)
			v.push_back(make_pair((double)s[i].unclear / s[i].go, i));
		else
			v.push_back(make_pair(0, i));
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < N; i++)
		answer.push_back(v[i].second);
	return answer;
}