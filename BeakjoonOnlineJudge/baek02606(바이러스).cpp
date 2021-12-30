#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n, m,cnt=0;
bool visit[101];
vector<int> graph[101];
queue<int> q;
void bfs() {
	if (q.empty()) return;
	int node = q.front();
	cnt++;
	q.pop();
	for (auto near : graph[node]) {
		if (!visit[near]) {
			visit[near] = 1;
			q.push(near);
		}
	}
	bfs();
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	q.push(1);
	visit[1] = 1;
	bfs();
	cout << cnt-1;
	return 0;
}