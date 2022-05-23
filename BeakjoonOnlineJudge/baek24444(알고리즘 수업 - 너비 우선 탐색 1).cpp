#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
bool visit[100001];
int vcnt[100001];
vector<int> adj[100001];
queue<int> q;
void bfs(int i) {
	if (q.empty()) return;
	int cur = q.front();
	q.pop();
	vcnt[cur] = i;
	sort(adj[cur].begin(), adj[cur].end());
	for (auto near : adj[cur]) {
		if (!visit[near]) {
			visit[near] = 1;
			q.push(near);
		}
	}
	bfs(i+1);
}
int main() {
	int n, m, r; scanf("%d %d %d", &n, &m, &r);
	for (int i = 0; i < m; i++) {
		int s, e; scanf("%d %d", &s, &e);
		adj[s].push_back(e);
		adj[e].push_back(s);
	}
	visit[r] = 1;
	q.push(r);
	bfs(1);
	for (int i = 0; i < n; i++)
		printf("%d\n",vcnt[i + 1]);
	return 0;
}