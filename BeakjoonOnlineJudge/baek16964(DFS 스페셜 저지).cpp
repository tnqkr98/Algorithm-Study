#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> adj[100001];
bool visit[100001];
queue<int> q;
int vc = 0;
bool isNear(int s, int n) {
	for (auto i : adj[s]) 
		if (i == n) return 1;
	return 0;
}
void dfs(int s) {
	if (visit[s]) return;
	visit[s] = 1;
	vc++;
	for (int i = 0;i<adj[s].size();i++) {
		if (!q.empty()) {
			int next = q.front();
			if (!visit[next] && isNear(s, next)) {
				q.pop();
				dfs(next);
			}
			else return;
		}
		else return;
	}
}
int main() {
	int n; cin >> n;
	for (int i = 0; i < n-1; i++) {
		int s, e; cin >> s >> e;
		adj[s].push_back(e);
		adj[e].push_back(s);
	}
	for (int i = 0; i < n; i++) {
		int d; cin >> d;
		q.push(d);
	}
	q.pop();
	dfs(1);
	if (vc == n) cout << 1;
	else cout << 0;
	return 0;
}