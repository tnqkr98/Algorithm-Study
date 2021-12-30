//#include <cstdio>
//#include <queue>
//#include <memory.h>
//#pragma warning(disable:4996)
//using namespace std;
//int w,h,m[50][50], op1[8] = { 0,1,0,-1,-1,-1,1,1 }, op2[8] = { 1,0,-1,0 ,-1,1,-1,1};
//int chk[50][50];
//typedef struct {
//	int r, c;
//} rc;
//queue<rc> q;
//void bfs() {
//	if (q.empty())
//		return;
//	int r, c;
//	r = q.front().r;
//	c = q.front().c;
//	q.pop();
//	for (int i = 0; i < 8; i++) {
//		int nr, nc;
//		nr = r + op1[i];
//		nc = c + op2[i];
//		if (nr >= 0 && nc >= 0 && nr < h && nc < w && !chk[nr][nc] && m[nr][nc]) {
//			q.push({ nr,nc });
//			chk[nr][nc] = 1;
//		}
//	}
//	bfs();
//}
//
//int main() {
//	int n;
//	while (1) {
//		n = 0;
//		scanf("%d %d", &w, &h);
//		if (w == 0 && h == 0) break;
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				int t;
//				scanf("%d", &t);
//				m[i][j] = t;
//			}
//		}
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				if (!chk[i][j] && m[i][j]) {
//					n++;
//					q.push({ i,j });
//					chk[i][j] = 1;
//					bfs();
//				}
//			}
//		}
//		printf("%d\n", n);
//		memset(m, 0, sizeof(m));
//		memset(chk, 0, sizeof(chk));
//	}
//	return 0;
//}