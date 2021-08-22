//#include <iostream>
//#include <queue>
//#include <memory.h>
//using namespace std;
//typedef struct {
//	int r, c,cnt;
//} RC;
//int t, n, nr, nc, dr, dc;
//int chk[301][301];
//int mov[8][2] = { {-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1} };
//queue<RC> q;
//int bfs() {
//	if (q.empty()) return 0;
//	int r, c, cnt;
//	r = q.front().r;
//	c = q.front().c;
//	cnt = q.front().cnt;
//	q.pop();
//	if (r == dr && c == dc)
//		return cnt;
//	for (int i = 0; i < 8; i++) {
//		int newr, newc;
//		newr = r + mov[i][0];
//		newc = c + mov[i][1];
//		if (newr >= 0 && newc >= 0 && newr < n&&newc < n && !chk[newr][newc]) {
//			q.push({ newr,newc,cnt + 1 });
//			chk[newr][newc] = 1;
//		}
//	}
//	return bfs();
//}
//int main() {
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		cin>>n>>nr>>nc>>dr>>dc;
//		q.push({ nr,nc,0 });
//		chk[nr][nc] = 1;
//		cout << bfs() <<endl;
//		while (!q.empty()) q.pop();
//		memset(chk, 0, sizeof(chk));
//	}
//	return 0;
//}