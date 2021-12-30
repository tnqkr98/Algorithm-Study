//#include <iostream>
//#include <memory.h>
//#include <queue>
//using namespace std;
//typedef struct {
//	int r, c;
//} rc;
//int map[301][301],op[4] = { 0,1,0,-1 },n, m;
//bool chk[301][301];
//void melt() {
//	int ml[301][301] = {0};
//	for (int i = 0; i < n; i++) 
//		for (int j = 0; j < m; j++) {
//			int ar = 0;
//			if (map[i][j] == 0) continue;
//			else {
//				for (int k = 0; k < 4; k++) {
//					int nr, nc;
//					nr = i + op[k]; 
//					nc = j + op[(k + 1) % 4];
//					if (map[nr][nc] == 0)
//						ar++;
//				}
//			}
//			ml[i][j] = ar;
//		}
//
//	for (int i = 0; i < n; i++) 
//		for (int j = 0; j < m; j++) {
//			map[i][j] -= ml[i][j];
//			if (map[i][j] < 0) map[i][j] = 0;
//		}
//}
//
//int bfs(int row,int col) {
//	int n = 1;
//	queue<rc>q;
//	q.push({ row,col });
//	while (1) {
//		if (q.empty())break;
//		int r, c;
//		r = q.front().r;
//		c = q.front().c;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nr, nc;
//			nr = r + op[i];
//			nc = c + op[(i + 1) % 4];
//			if (map[nr][nc] != 0 && !chk[nr][nc]) {
//				chk[nr][nc] = 1;
//				q.push({ nr,nc });
//				n++;
//			}
//		}
//	}
//	return n;
//}
//
//int main() {
//	int y = 0,part=0,ice=0;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) 
//		for (int j = 0; j < m; j++) 
//			cin >> map[i][j];
//
//	for (y = 0;; y++) {
//		for (int i = 0; i < n; i++) 
//			for (int j = 0; j < m; j++) 
//				if (map[i][j] != 0 && !chk[i][j]) {
//					ice+=bfs(i, j);
//					part++;
//				}
//
//		if (part >= 2) {
//			cout << y;
//			break;
//		}
//
//		if (ice == 0) {
//			cout << 0;
//			break;
//		}
//		melt();
//		memset(chk, 0, sizeof(chk));
//		part = 0;
//		ice = 0;
//	}
//
//
//	return 0;
//}