#include <iostream>
#include <queue>
#include <memory.h>
using namespace std;
int map[126][126], minmap[126][126];
int d[4][2] = { {0,1},{0,-1},{1,0},{-1,0} }, n;
typedef struct { int r, c; } RC;
queue<RC> q;
void bfs() {
	if (q.empty()) return;
	int r, c;
	r = q.front().r;
	c = q.front().c;
	q.pop();
	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = r + d[i][0];
		nc = c + d[i][1];
		if (nr >= 0 && nc >= 0 && nr < n&&nc < n) {
			if (minmap[nr][nc] == -1) {
				minmap[nr][nc] = map[nr][nc] + minmap[r][c];
				q.push({ nr,nc });
			}
			else if (minmap[nr][nc] > minmap[r][c] + map[nr][nc]) {
				minmap[nr][nc] = minmap[r][c] + map[nr][nc];
				q.push({ nr,nc });
			}
		}
	}
	bfs();
}
int main() {
	int cnt = 1;
	do {
		cin >> n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) {
				int t; cin >> t;
				map[i][j] = t;
				minmap[i][j] = -1;
			}
		q.push({ 0,0 });
		minmap[0][0] = map[0][0];
		bfs();
		if (n != 0) cout << "Problem " << cnt++ << ": " << minmap[n - 1][n - 1] << endl;
		memset(map, 0, sizeof(map));
		memset(minmap, 0, sizeof(minmap));
		while (!q.empty()) q.pop();
	} while (n != 0);
	return 0;
}