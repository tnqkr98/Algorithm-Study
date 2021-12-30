#include <string>
#include <vector>
#include <queue>
using namespace std;
vector<int> graph[51];
vector<string> word;
queue<pair<int, int>> q;
int answer = 0;
bool visit[51];
void bfs(string t) {
	if (q.empty()) return;
	auto cur = q.front(); q.pop();
	if (word[cur.first] == t) {
		answer = cur.second;
		return;
	}
	for (auto near : graph[cur.first]) {
		if (!visit[near]) {
			q.push({ near,cur.second + 1 });
			visit[near] = 1;
		}
	}
	bfs(t);
}
bool isNear(string a, string b) {
	int res = 0;
	for (int i = 0; i < a.size(); i++)
		if (a[i] != b[i]) {
			res++;
			if (res == 2) return 0;
		}
	return 1;
}
int solution(string begin, string target, vector<string> words) {
	word = words;
	words.push_back(begin);
	for (int i = 0; i < words.size() - 1; i++)
		for (int j = i + 1; j < words.size(); j++)
			if (isNear(words[i], words[j])) {
				graph[i].push_back(j);
				graph[j].push_back(i);
			}
	q.push({ words.size() - 1,0 });
	visit[words.size() - 1] = 1;
	bfs(target);
	return answer;
}