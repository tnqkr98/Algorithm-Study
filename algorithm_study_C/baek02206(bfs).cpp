////https://www.acmicpc.net/problem/2206
//// 백준 2206번 : 벽뚫고 이동하기
//// 관련 알고리즘 : BFS
//
//#include <cstdio>
//#include <queue>
//#pragma warning(disable:4996)
//using namespace std;
//char map[1000][1000];
//bool check[1000][1000][2] = {0};
//struct rcc {short row, col, cnt;bool bre;};
//queue<rcc>q;
//int main() {
//	int i, j, n, m, mmin = 2000;
//	char s[1001];
//	short r, c, cnt, nr, nc, d[] = { -1,1,0,0 };
//	bool b;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++) {
//		scanf("%s", s);
//		for (j = 0; j < m; j++) 
//			map[i][j] = s[j];
//	}
//	q.push({ 0,0,1,0 });
//	check[0][0][0] = 1;
//
//	while (!q.empty()) {
//		r = q.front().row;
//		c = q.front().col;
//		cnt = q.front().cnt;
//		b = q.front().bre;
//		q.pop();
//		if (r == n - 1 && c == m - 1) {
//			if (cnt < mmin)
//				mmin = cnt;
//			break;
//		}
//		for (i = 0; i < 4; i++) {
//			nr = r + d[i];  nc = c + d[(i + 2) % 4];
//			if (nr >= 0 && nr < n && nc >= 0 && nc < m && !check[nr][nc][b] && map[nr][nc] == '0') {
//				q.push({ nr,nc,cnt + 1,b });
//				check[nr][nc][b] = 1;
//			}
//		}
//		if (!b) 
//			for (i = 0; i < 4; i++) {
//				nr = r + d[i];  nc = c + d[(i + 2) % 4];
//				if (nr >= 0 && nr < n && nc >= 0 && nc < m && !check[nr][nc][b] && map[nr][nc] == '1') {
//					q.push({ nr,nc,cnt + 1,1 });
//					check[nr][nc][1] = 1;
//				}
//			}
//	}
//	if (mmin != 2000)
//		printf("%d", mmin);
//	else
//		printf("-1");
//	return 0;
//}