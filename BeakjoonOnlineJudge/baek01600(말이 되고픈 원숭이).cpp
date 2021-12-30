#include <iostream>
#include <climits>
#include <queue>
#include <algorithm>
using namespace std;
struct rc { int r, c, k; };
queue<rc> q;
int map[200][200], k, w, h, gmin = INT_MAX;
int visit[200][200][31];
int d[12][2] = { {0,1},{0,-1},{1,0},{-1,0},{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2} };
int main() {
	cin >> k >> w >> h;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			cin >> map[i][j];
	for (int i = 0; i < 200; i++)
		for (int j = 0; j < 200; j++)
			for (int k = 0; k < 31; k++)
				visit[i][j][k] = INT_MAX;
	q.push({ 0,0,k });
	visit[0][0][k] = 0;
	while (!q.empty()) {
		int cnt;
		rc cur = q.front();
		cnt = visit[cur.r][cur.c][cur.k];
		q.pop();
		if (cur.r == h - 1 && cur.c == w - 1) {
			if(visit[cur.r][cur.c][cur.k] <gmin)
				gmin = visit[cur.r][cur.c][cur.k];
			continue;
		}
		for (int i = 0; i < 12; i++) {
			if (cur.k == 0 && i > 3) break;
			int nr, nc;
			nr = cur.r + d[i][0];
			nc = cur.c + d[i][1];
			if (nr >= 0 && nc >= 0 && nr < h&&nc < w && !map[nr][nc]){
				if (i > 3 && visit[nr][nc][cur.k - 1]> cnt +1) {
					visit[nr][nc][cur.k - 1] = cnt + 1;
					q.push({ nr,nc,cur.k - 1});
				}
				else if(i<=3 && visit[nr][nc][cur.k] > cnt + 1){
					visit[nr][nc][cur.k] = cnt + 1;
					q.push({ nr,nc,cur.k });
				}
			}
		}
	}
	if (gmin != INT_MAX) cout << gmin;
	else cout << -1;
	return 0;
}
