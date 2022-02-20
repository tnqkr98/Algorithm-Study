#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
struct rc {int r, c,f;};
bool cmp(rc a, rc b) {
	if (a.f < b.f) return 1;
	else if (a.f == b.f) {
		if (a.r < b.r) return 1;
		else if (a.r == b.r) {
			if (a.c < b.c) return 1;
		}
	}
	return 0;
}
int arr[21][21], n, m, f, tr, tc, d[4][2] = { {0,-1},{-1,0},{1,0},{0,1} };
rc dest[21][21];
rc finduser(int r,int c) {
	queue<rc> q;
	vector<rc> v;
	bool visit[21][21] = { 0 };
	q.push({ r,c });
	visit[r][c] = 1;
	while (!q.empty()) {
		rc cur = q.front(); q.pop();
		if (arr[cur.r][cur.c] == 2) {
			v.push_back(cur);
			continue;
		}
		for (int i = 0; i < 4; i++) {
			int nr, nc;
			nr = cur.r + d[i][0];
			nc = cur.c + d[i][1];
			if (nr >= 0 && nc >= 0 && nr < n &&nc < n && arr[nr][nc] != 1 && !visit[nr][nc]) {
				visit[nr][nc] = 1;
				q.push({ nr,nc,cur.f+1 });
			}
		}
	}
	sort(v.begin(), v.end(), cmp);
	if(v.size()>0) return v[0];
	else return {-1};
}
int fromToFuel(int sr, int sc, int dr, int dc) {
	queue<rc> q;
	bool visit[21][21] = { 0 };
	q.push({ sr,sc });
	visit[sr][sc] = 1;
	while (!q.empty()) {
		rc cur = q.front(); q.pop();
		if (cur.r == dr && cur.c == dc) return cur.f;
		for (int i = 0; i < 4; i++) {
			int nr, nc;
			nr = cur.r + d[i][0];
			nc = cur.c + d[i][1];
			if (nr >= 0 && nc >= 0 && nr < n &&nc < n && arr[nr][nc] != 1 && !visit[nr][nc]) {
				visit[nr][nc] = 1;
				q.push({ nr,nc,cur.f + 1 });
			}
		}
	}
	return -1;
}
int main() {
	bool flag = 0;
	cin >> n >> m >> f;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) cin >> arr[i][j];
	cin >> tr >> tc;
	tr--; tc--;
	for (int i = 0; i < m; i++) {
		int r, c, dr, dc;
		cin >> r >> c >> dr >> dc;
		dest[r-1][c-1] = { dr-1,dc-1 };
		arr[r-1][c-1] = 2;
	}
	while (f >= 0 && m > 0) {
		rc newpos = finduser(tr, tc);
		tr = newpos.r;
		if (tr == -1) { flag = 1; break; }
		tc = newpos.c;
		f -= newpos.f;
		if (f <= 0) { flag = 1; break; }
		arr[tr][tc] = 0;
		rc destrc = dest[tr][tc];
		int destfuel = fromToFuel(tr, tc, destrc.r, destrc.c);
		if (destfuel == -1) { flag = 1; break; }
		tr = destrc.r;
		tc = destrc.c;
		f -= destfuel;
		if (f < 0) {flag = 1;break;}
		m--;
		f += (destfuel * 2);
	}
	if (flag) cout << -1;
	else cout << f;
	return 0;
}