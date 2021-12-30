//#include <iostream>
//#include <queue>
//#include <memory.h>
//using namespace std;
//struct rc {int r, c;};
//int map[101][101], op[4] = { 0,1,0,-1 },n;
//bool chk[101][101];
//queue<rc>q;
//void bfs(int h) {
//	while (!q.empty()) {
//		int r, c;
//		r = q.front().r;
//		c = q.front().c;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nr, nc;
//			nr = r + op[i];
//			nc = c + op[(i + 1) % 4];
//			if (nr >= 0 && nr < n &&nc >= 0 && nc<n && !chk[nr][nc] && map[nr][nc]>h) {
//				q.push({ nr,nc });
//				chk[nr][nc] = 1;
//			}
//		}
//	}
//}
//int main() {
//	int min=101,max=0,res=1;
//	cin >> n;
//	for(int i=0;i<n;i++)
//		for (int j = 0; j < n; j++) {
//			int t;
//			cin >> t;
//			map[i][j] = t;
//			if (t > max) max = t;
//			if (t < min) min = t;
//		}
//	int safe = 0;
//	for (int i = min; i < max; i++) {
//		for (int j = 0; j < n; j++) 
//			for (int k = 0; k < n; k++) {
//				if (map[j][k] > i && !chk[j][k]) {
//					q.push({ j,k });
//					chk[j][k] = 1;
//					bfs(i);
//					safe++;
//				}
//			}
//		if (safe > res) res = safe;
//		safe = 0;
//		memset(chk, 0, sizeof(chk));
//	}
//	cout << res;
//	return 0;
//}