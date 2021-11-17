#include <iostream>
#include <queue>
#include <vector>
#include <memory.h>
using namespace std;
vector<vector<int>> adj;
queue<int> q;
bool visit[1001];
int num = 0;
void bfs() {
	if (q.empty()) return;
	int cur = q.front(); q.pop();
	for (auto near : adj[cur]) 
		if (!visit[near]) {
			q.push(near);
			visit[near] = 1;
			num++;
		}
	bfs();
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, m,start; cin >> n >> m;
		num = 0;
		memset(visit, 0, sizeof(visit));
		adj = vector<vector<int>>(n+1);
		for (int i = 0; i < m; i++) {
			int s, e; cin >> s >> e;
			adj[s].push_back(e);
			adj[e].push_back(s);
			start = s;
		}
		visit[start] = 1;
		q.push(start);
		bfs();
		cout << num << endl;
	}

	return 0;
}