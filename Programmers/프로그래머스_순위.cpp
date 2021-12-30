#include <string>
#include <vector>
#include <queue>
#include <memory.h>
using namespace std;
int cnt;
bool visit[101] = { 0 };
vector<int> graph[101], rgraph[101];
queue<int> q;
void bfs(vector<int> *g) {
	if (q.empty()) return;
	int cur = q.front(); q.pop();
	for (auto near : g[cur]) {
		if (!visit[near]) {
			visit[near] = 1;
			cnt++;
			q.push(near);
		}
	}
	bfs(g);
}
int solution(int n, vector<vector<int>> results) {
	int ans = 0;
	for (int i = 0; i < results.size(); i++) {
		graph[results[i][0]].push_back(results[i][1]);
		rgraph[results[i][1]].push_back(results[i][0]);
	}
	for (int i = 1; i <= n; i++) {
		int sum = 0;
		q.push(i); visit[i] = 1;
		bfs(graph);
		sum += cnt; cnt = 0;
		memset(visit, 0, sizeof(visit));
		q.push(i); visit[i] = 1;
		bfs(rgraph);
		sum += cnt; cnt = 0;
		memset(visit, 0, sizeof(visit));
		if (sum + 1 == n) ans++;
	}
	return ans;
}