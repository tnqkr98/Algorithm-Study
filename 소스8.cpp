//#include <iostream>
//#include <queue>
//#include <memory.h>
//using namespace std;
//typedef struct {
//	int r, c, d;
//} rcd;
//int n, d,ir[4] = { -1,0,1,0 };
//short map[1001][1001];
//short maxmap[1001][1001] = { 0 };
//queue<rcd> q;
//void bfs() {
//	if (q.empty())
//		return;
//	int r, c, d;
//	r = q.front().r;
//	c = q.front().c;
//	d = q.front().d;
//	q.pop();
//	if (d <= 0)
//		return;
//	if (r == n - 1 && c == n - 1) 
//		return;
//	for (int i = 0; i < 4; i++) {
//		int nr, nc;
//		nr = r + ir[i]; nc = c + ir[(i+3)%4];
//		if (nr >= 0 && nc >= 0 && nr < n && nc < n && d-map[nr][nc] >= maxmap[nr][nc]){
//			rcd t = { nr,nc,d - map[nr][nc] };
//			maxmap[nr][nc] = d - map[nr][nc];
//			q.push(t);
//		}
//	}
//	bfs();
//}
//
//int main() {
//	cin >> n >> d;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			cin >> map[i][j];
//	rcd t = { 0,0,d - map[0][0] };
//	maxmap[0][0] = d - map[0][0];
//	q.push(t);
//	bfs();
//	if (maxmap[n-1][n-1] == 0)
//		cout << -1;
//	else
//		cout << maxmap[n-1][n-1];
//	return 0;
//}