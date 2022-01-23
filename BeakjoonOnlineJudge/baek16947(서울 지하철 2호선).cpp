#include <iostream>
#include <vector>
#include <queue>
#include <memory.h>
using namespace std;
vector<int> adj[3001];
int prv[3001],start,dist[3001];
bool visit[3001], iscycle[3001],fin=0;
queue<int> q;
void dfs(int cur, int from) {
	visit[cur] = 1;
	for (int near : adj[cur]) {
		if (from == near) continue;
		if (fin) return;
		if (!visit[near]) {
			prv[near] = cur;
			dfs(near, cur);
		}
		else if(!fin){
			// Cycle 발견 지점.
			start = near;
			int end = cur;
			iscycle[end] = 1;
			iscycle[start] = 1;
			while (prv[end] != start) {	// 사이클 표시
				end = prv[end];
				iscycle[end] = 1;
			}
			fin = 1;
			return;
		}
	}
	
}
void bfs() {
	if (q.empty()) return;
	int cur = q.front(); q.pop();
	for (int near : adj[cur]) {
		if (!visit[near]) {
			visit[near] = 1;
			if (!iscycle[near])
				dist[near] = dist[cur] + 1;
			q.push(near);
		}
	}
	bfs();
}
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int s, e; cin >> s >> e;
		adj[s].push_back(e);
		adj[e].push_back(s);
	}
	dfs(1,-1);
	memset(visit, 0, sizeof(visit));
	visit[start] = 1;
	dist[start] = 0;
	q.push(start);
	bfs();
	for (int i = 1; i <= n; i++) 
		cout << dist[i] <<" ";
	return 0;
}