#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct rc { int r, c, d; };
int mp[21][21], n;
bool wall[21][21][4];
vector<rc> temp, radi;
bool chk(int pr, int pc) {
	return pr >= 0 && pc >= 0 && pr < n && pc < n;
}
void calcul(int up[][21]) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) mp[i][j] += up[i][j];
}
void wind() {
	for (auto ra : radi) {
		int up[21][21] = { 0 };
		queue<rc> q;
		if (ra.d == 4) q.push({ ra.r,ra.c + 1,5 });
		if (ra.d == 2) q.push({ ra.r,ra.c - 1,5 });
		if (ra.d == 3) q.push({ ra.r - 1,ra.c,5 });
		if (ra.d == 5) q.push({ ra.r + 1,ra.c,5 });
		while (!q.empty()) {
			rc cur = q.front(); q.pop();
			up[cur.r][cur.c] = cur.d;
			if (cur.d == 1) continue;
			if (ra.d == 4) {
				if (chk(cur.r, cur.c + 1) && !wall[cur.r][cur.c][0])
					q.push({ cur.r,cur.c + 1,cur.d - 1 });
				if (chk(cur.r - 1, cur.c + 1) && !wall[cur.r][cur.c][3] && !wall[cur.r - 1][cur.c + 1][2])
					q.push({ cur.r - 1,cur.c + 1,cur.d - 1 });
				if (chk(cur.r + 1, cur.c + 1) && !wall[cur.r][cur.c][1] && !wall[cur.r + 1][cur.c + 1][2])
					q.push({ cur.r + 1,cur.c + 1,cur.d - 1 });
			}
			else if (ra.d == 2) {
				if (chk(cur.r, cur.c - 1) && !wall[cur.r][cur.c][2])
					q.push({ cur.r,cur.c - 1,cur.d - 1 });
				if (chk(cur.r - 1, cur.c - 1) && !wall[cur.r][cur.c][3] && !wall[cur.r - 1][cur.c - 1][0])
					q.push({ cur.r - 1,cur.c - 1,cur.d - 1 });
				if (chk(cur.r + 1, cur.c - 1) && !wall[cur.r][cur.c][1] && !wall[cur.r + 1][cur.c - 1][0])
					q.push({ cur.r + 1,cur.c - 1,cur.d - 1 });
			}
			else if (ra.d == 3) {
				if (chk(cur.r - 1, cur.c) && !wall[cur.r][cur.c][3])
					q.push({ cur.r - 1,cur.c,cur.d - 1 });
				if (chk(cur.r - 1, cur.c - 1) && !wall[cur.r][cur.c][2] && !wall[cur.r - 1][cur.c - 1][1])
					q.push({ cur.r - 1,cur.c - 1,cur.d - 1 });
				if (chk(cur.r - 1, cur.c + 1) && !wall[cur.r][cur.c][0] && !wall[cur.r - 1][cur.c + 1][1])
					q.push({ cur.r - 1,cur.c + 1,cur.d - 1 });
			}
			else if (ra.d == 5) {
				if (chk(cur.r + 1, cur.c) && !wall[cur.r][cur.c][1])
					q.push({ cur.r + 1,cur.c,cur.d - 1 });
				if (chk(cur.r + 1, cur.c + 1) && !wall[cur.r][cur.c][0] && !wall[cur.r + 1][cur.c + 1][3])
					q.push({ cur.r + 1,cur.c + 1,cur.d - 1 });
				if (chk(cur.r + 1, cur.c - 1) && !wall[cur.r][cur.c][2] && !wall[cur.r + 1][cur.c - 1][3])
					q.push({ cur.r + 1,cur.c - 1,cur.d - 1 });
			}
		}
		calcul(up);
	}
}
void cont() {
	int st[21][21] = { 0 };
	int d[4][2] = { { 0,1 },{ 1,0 },{ 0,-1 },{ -1,0 } };
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < 4; k++) {
				int nr, nc;
				nr = i + d[k][0];
				nc = j + d[k][1];
				if (!wall[i][j][k] && chk(nr, nc)) {
					int val = (mp[i][j] - mp[nr][nc]) / 4;
					st[i][j] += (-1)*val;
				}
			}
		}
	calcul(st);
}
void outer() {
	for (int i = 1; i < n - 1; i++) {
		if (mp[i][0] > 0) mp[i][0]--;
		if (mp[i][n - 1] > 0) mp[i][n - 1]--;
		if (mp[0][i] > 0) mp[0][i]--;
		if (mp[n - 1][i] > 0) mp[n - 1][i]--;
	}
	if (mp[0][0] > 0) mp[0][0]--;
	if (mp[0][n - 1] > 0) mp[0][n - 1]--;
	if (mp[n - 1][0] > 0) mp[n - 1][0]--;
	if (mp[n - 1][n - 1] > 0) mp[n - 1][n - 1]--;
}
bool isupk(int kk) {
	for (auto t : temp)
		if (mp[t.r][t.c] < kk) return 0;
	return 1;
}
int main() {
	int k, w, cho = 0; cin >> n >> w >> k;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			int t; cin >> t;
			if (t > 1 && t <= 5) radi.push_back({ i,j,t });
			else if (t == 1) temp.push_back({ i,j });
		}
	while (w--) {
		int x, y, t; cin >> x >> y >> t;
		if (t == 1) {
			wall[x - 1][y - 1][2] = 1;
			wall[x - 1][y - 2][0] = 1;
		}
		else {
			wall[x - 1][y - 1][3] = 1;
			wall[x - 2][y - 1][1] = 1;
		}
	}
	while (cho < 101) {
		wind();
		cont();
		outer();
		cho++;
		if (isupk(k)) break;
	}
	if (cho > 100) cout << -1;
	else cout << cho;
	return 0;
}