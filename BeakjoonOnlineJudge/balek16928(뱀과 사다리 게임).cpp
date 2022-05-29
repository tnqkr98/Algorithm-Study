#include <iostream>
#include <queue>
using namespace std;
struct nc {int n, c;};
int lad[101], snake[101],mmin=1e9;
bool visit[101];
queue<nc> q;
void bfs() {
	if (q.empty()) return;
	auto cur = q.front(); q.pop();
	if (cur.n == 100) {
		if (cur.c < mmin) mmin = cur.c;
		return;
	}
	for (int i = 1; i <= 6; i++) {
		int nc = cur.n + i;
		if (!visit[nc] && nc <101) {
			visit[nc] = 1;
			if (lad[nc]) nc = lad[nc];
			if (snake[nc]) nc = snake[nc];
			q.push({ nc,cur.c + 1 });
		}
	}
	bfs();
}
int main() {
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		lad[a] = b;
	}
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		snake[a] = b;
	}
	q.push({ 1,0 });
	visit[1] = 1;
	bfs();
	cout << mmin;
	return 0;
}