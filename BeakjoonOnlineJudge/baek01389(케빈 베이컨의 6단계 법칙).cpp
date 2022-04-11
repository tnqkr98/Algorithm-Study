#include <iostream>
#include <vector>
#include <queue>
#include <memory.h>
using namespace std;
struct nd {int n, d;};
vector<int> f[101];
queue<nd> q;
int visit[101];
void bfs() {
	if (q.empty()) return;
	int cur = q.front().n;
	int d = q.front().d;
	q.pop();
	for (auto i : f[cur]) {
		if (visit[i]!=-1 && visit[i]==0) {
			visit[i] = d+1;
			q.push({ i,d + 1 });
		}
	}
	bfs();
}
int main() {
	int n, m; cin >> n >> m;
	int min = 1e9,man=1;
	for (int i = 0; i < m; i++) {
		int s, e; cin >> s >> e;
		f[s].push_back(e);
		f[e].push_back(s);
	}
	for (int i = 1; i <= n; i++) {
		int sum = 0;
		memset(visit, 0, sizeof(visit));
		q.push({ i,0 });
		visit[i] = -1;
		bfs();
		for (int j = 1; j <= n; j++) {
			if (j == i)continue;
			sum += visit[j];
		}
		if (sum < min) {
			min = sum;
			man = i;
		}
	}
	cout << man;
	return 0;
}