#include <iostream>
#include <vector>
#include <queue>
using namespace std;
bool visit[101];
queue<pair<int,int>> q;
int n,a,b,chon=-1;
vector<int> graph[101];
void bfs() {
	if (q.empty())
		return;
	int cur = q.front().first;
	int ch = q.front().second; q.pop();
	if (cur == b) {
		chon = ch;
		return;
	}
	for (auto near: graph[cur]) {
		if (!visit[near]) {
			visit[near] = 1;
			q.push({ near,ch + 1 });
		}
	}
	bfs();
}
int main() {
	cin >> n >> a >> b;
	int t; cin >> t;
	while (t--) {
		int s, e; cin >> s >> e;
		graph[s].push_back(e);
		graph[e].push_back(s);
	}
	q.push({ a,0 });
	visit[a] = 1;
 	bfs();
	cout << chon;
	return 0;
}