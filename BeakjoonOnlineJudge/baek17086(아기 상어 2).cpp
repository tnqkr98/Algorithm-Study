#include <iostream>
#include <queue>
using namespace std;
struct rc {int r, c,d;};
int arr[51][51],n,m, d[8][2] = { {0,1},{1,0},{0,-1},{-1,0},{1,1},{1,-1},{-1,-1},{-1,1} };
int bfs(rc s) {
	queue<rc> q;
	bool v[51][51] = { 0 };
	q.push(s);
	v[s.r][s.c] = 1;
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		if (arr[cur.r][cur.c] == 1) {
			return cur.d;
		}
		for (int i = 0; i < 8; i++) {
			int nr = cur.r + d[i][0];
			int nc = cur.c + d[i][1];
			if (nr >= 0 && nc >= 0 && nr < n&&nc < m && !v[nr][nc]) {
				q.push({ nr,nc,cur.d+1 });
				v[nr][nc] = 1;
			}
		}
	}
	return 0;
}
int main() {
	int max = 0; cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			int val = bfs({ i,j ,0});
			if (val > max) max = val;
		}
	cout <<max;
	return 0;
}