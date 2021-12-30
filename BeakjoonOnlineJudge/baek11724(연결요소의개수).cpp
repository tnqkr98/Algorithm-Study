#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n, m;
vector<vector<int>> g;
bool check[1001] = { 0 };
queue<int>q;
void bfs() {
	int v;
	if (q.empty())
		return;
	v = q.front();
	q.pop();
	for (int i = 0; i < g[v].size(); i++) {
		if (check[g[v][i]]) continue;
		check[g[v][i]] = 1;
		q.push(g[v][i]);
	}
	bfs();
}
int main() {
	int cnt = 0;
	cin >> n >> m;
	for (int i = 0; i <= n; i++)
		g.push_back(vector<int>());
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		if (check[i]) continue;
		q.push(i);
		check[i] = 1;
		bfs();
		cnt++;
	}
	cout << cnt;
	return 0;
}