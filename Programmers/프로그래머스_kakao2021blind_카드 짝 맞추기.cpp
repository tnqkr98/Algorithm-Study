#include <string>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;
struct rc { int r, c, d; };
vector<vector<int>> B;
bool check[7];
int mmin = 1e9, d[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
bool range(int r, int c) { return r >= 0 && c >= 0 && r < 4 && c < 4; }
vector<rc> bfs(int r, int c, int tar) {   // 거리 계산
	vector<rc> res;
	queue<rc> q;
	bool visit[4][4] = { 0 };
	visit[r][c] = 1;
	q.push({ r,c,0 });
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		if (!(cur.r == r && cur.c == c)) {
			if (tar == -1 && B[cur.r][cur.c] != 0 && check[B[cur.r][cur.c]])
				res.push_back(cur);
			else if (tar == B[cur.r][cur.c]) {
				res.push_back(cur);
				return res;
			}
		}
		for (int i = 0; i < 4; i++) {
			int nr, nc;
			nr = cur.r + d[i][0];
			nc = cur.c + d[i][1];
			if (range(nr, nc) && !visit[nr][nc]) {
				visit[nr][nc] = 1;
				q.push({ nr,nc,cur.d + 1 });
			}
			else if (!range(nr, nc)) continue;

			if (B[nr][nc] != 0 && check[B[nr][nc]]) continue;

			while (range(nr + d[i][0], nc + d[i][1])) {
				nr += d[i][0];
				nc += d[i][1];
				if (B[nr][nc] != 0 && check[B[nr][nc]])
					break;
			}
			if (!visit[nr][nc]) {
				visit[nr][nc] = 1;
				q.push({ nr,nc,cur.d + 1 });
			}
		}
	}
	return res;
}
bool isEnd() {
	for (int i = 0; i < 7; i++)
		if (check[i]) return 0;
	return 1;
}
void dfs(int r, int c, int before, int cnt) {
	if (isEnd()) {
		if (cnt < mmin) mmin = cnt;
		return;
	}
	if (before == 0) {
		auto near = bfs(r, c, -1);
		for (auto n : near)
			dfs(n.r, n.c, B[n.r][n.c], cnt + n.d + 1);
	}
	else {
		auto pair = bfs(r, c, before);
		check[before] = 0;
		dfs(pair[0].r, pair[0].c, 0, cnt + pair[0].d + 1);
		check[before] = 1;
	}
}
int solution(vector<vector<int>> board, int r, int c) {
	B = board;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			if (B[i][j] != 0) check[B[i][j]] = 1;
	if (B[r][c] == 0) dfs(r, c, 0, 0);
	else dfs(r, c, B[r][c], 1);
	return mmin;
}