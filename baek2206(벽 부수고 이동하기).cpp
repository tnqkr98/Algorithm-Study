#include <iostream>
#include <queue>
#include <string>
using namespace std;
typedef struct { int r, c,cnt; bool brek; } RC;
int map[1001][1001], chk[1001][1001], mmin = -1;
int n, m, d[4][2] = { {0,1},{0,-1},{1,0},{-1,0}};
queue<RC> q;
void bfs() {
	if (q.empty()) return;
	int r, c, cnt;
	bool brek;
	r = q.front().r;
	c = q.front().c;
	cnt = q.front().cnt;
	brek = q.front().brek;
	q.pop();

	if (r == n - 1 && c == m - 1) {
		if (mmin == -1) 
			mmin = cnt;
		else if (mmin > cnt) 
			mmin = cnt;
		return;
	}

	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = r + d[i][0];
		nc = c + d[i][1];
		if (nr >= 0 && nc >= 0 && nr < n && nc < m && chk[nr][nc]!=1) {
			if (brek && chk[nr][nc] == 0 && map[nr][nc] == 0) {
				chk[nr][nc] = 2;
				q.push({ nr,nc,cnt + 1,brek });
			}
			else if(!brek && (chk[nr][nc]==0 || chk[nr][nc]==2)) {
				if (map[nr][nc] == 0) {
					chk[nr][nc] = 1;
					q.push({ nr,nc,cnt + 1,brek });
				}
				else {
					chk[nr][nc] = 1;
					q.push({ nr,nc,cnt + 1,!brek });
				}
			}
		}
	}
	bfs();
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string t; cin >> t;
		for (int j = 0; j < m; j++) 
			map[i][j] = t[j]-'0';
	}
	chk[0][0] = 1;
	q.push({ 0,0,1,false });
	bfs();
	cout << mmin;
	return 0;
}