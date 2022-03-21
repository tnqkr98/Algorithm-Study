#include <string>
#include <vector>
#include <queue>
#define DIV 1000000007
using namespace std;
struct rc {
	int r, c;
};
int mp[101][101], gn, gm;
int d[101][101], id[2][2] = { {0,1},{1,0} };
bool visit[101][101];
queue<rc> q;
void bfs() {
	if (q.empty()) return;
	int r, c;
	r = q.front().r;
	c = q.front().c;
	q.pop();
	if (r != 1 || c != 1) {
		d[r][c] = (d[r - 1][c] + d[r][c - 1]) % DIV;
	}
	for (int i = 0; i < 2; i++) {
		int nr, nc;
		nr = r + id[i][0];
		nc = c + id[i][1];
		if (nr > 0 && nc > 0 && nr <= gn && nc <= gm && !mp[nr][nc] && !visit[nr][nc]) {
			q.push({ nr,nc });
			visit[nr][nc] = 1;
		}
	}
	bfs();
}
int solution(int m, int n, vector<vector<int>> puddles) {
	gn = n; gm = m;
	for (auto i : puddles) mp[i[1]][i[0]] = 1;
	d[1][1] = 1;
	visit[1][1] = 1;
	q.push({ 1,1 });
	bfs();
	return d[n][m];
}
