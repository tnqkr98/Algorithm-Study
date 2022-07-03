#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct rc {int r, c,n;};
char mp[51][51];
bool visit[51][51];
vector<rc> w;
queue<rc> q;
int n, m,er,ec,past=1,clear=-1,d[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
bool range(int r,int c) {
	return r >= 0 && c >= 0 && r < n&&c < m;
}
bool isWaterFuture(int r,int c) {
	if (r == er && c == ec) return 0;
	for (int i = 0; i < 4; i++) {
		int nr = r + d[i][0];
		int nc = c + d[i][1];
		if (range(nr, nc) && mp[nr][nc] == '*') 
			return 1;
	}
	return 0;
}
void water() {
	vector<rc> nw;
	for (auto cur : w) 
		for (int i = 0; i < 4; i++) {
			int nr = cur.r + d[i][0];
			int nc = cur.c + d[i][1];
			if (range(nr, nc) && mp[nr][nc] == '.') {
				mp[nr][nc] = '*';
				nw.push_back({ nr,nc });
			}
		}
	w = nw;
}
void bfs() {
	if (q.empty()) return;
	auto cur = q.front(); q.pop();
	if (cur.r == er && cur.c == ec) {
		clear = cur.n;
		return;
	}
	if (past == cur.n) {
		water();
		past++;
	}
	for (int i = 0; i < 4; i++) {
		int nr = cur.r + d[i][0];
		int nc = cur.c + d[i][1];
		if (range(nr, nc) && mp[nr][nc] != '*' && !visit[nr][nc]&& mp[nr][nc] != 'X' && !isWaterFuture(nr,nc)) {
			q.push({ nr,nc,cur.n + 1 });
			visit[nr][nc] = 1;
		}
	}
	bfs();
}
int main() {
	cin >> n >> m;
	for(int i=0;i<n;i++)
		for (int j = 0; j < m; j++) {
			cin >> mp[i][j];
			if (mp[i][j] == '*') w.push_back({ i,j });
			if (mp[i][j] == 'S') {
				q.push({ i,j,0 });
				visit[i][j] = 1;
			}
			if (mp[i][j] == 'D') {
				er = i;
				ec = j;
			}
		}
	bfs();
	if (clear == -1) cout << "KAKTUS";
	else cout << clear;
	return 0;
}