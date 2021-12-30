//#include <iostream>
//#include <queue>
//#include <memory.h>
//#include <cmath>
//#include <vector>
//using namespace std;
//typedef struct {
//	int r, c;
//} rc;
//
//queue<rc>q;
//int a[51][51], n,L,R,op[4] = { 0,1,0,-1 };
//int sum = 0,cnt = 0;
//bool check[51][51];
//bool bfs() {
//	int res = false;
//	vector<rc> uni;
//	while (!q.empty()) {
//		int r, c;
//		r = q.front().r;
//		c = q.front().c;
//		q.pop();
//		sum += a[r][c];
//		uni.push_back({ r,c });
//		cnt++;
//		for (int i = 0; i < 4; i++) {
//			int nr, nc;
//			nr = r + op[i];
//			nc = c + op[(i + 1) % 4];
//			
//			if(nr >=0 && nr <n && nc>=0 && nc<n && !check[nr][nc]) {
//				int dif = abs(a[r][c] - a[nr][nc]);
//				if (dif >= L && dif <= R) {
//					q.push({ nr,nc });
//					check[nr][nc] = 1;
//					res = true;
//				}
//			}
//		}
//	}
//	int num = sum / cnt;
//	for (int i = 0; i < uni.size(); i++)
//		a[uni[i].r][uni[i].c] = num;
//
//	return res;
//}
//
//int main() {
//	int res = 0;
//	bool go = true;
//	cin >> n >> L >> R;
//	for (int i = 0; i < n; i++) 
//		for (int j = 0; j < n; j++) 
//			cin >> a[i][j];
//	while (go) {
//		go = false;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++) {
//				if (!check[i][j]) {
//					q.push({ i,j });
//					check[i][j] = 1;
//					if (bfs()) 
//						go = true;
//					else
//						check[i][j] = 0;
//					sum = 0;
//					cnt = 0;
//				}
//			}
//		if(go)
//			res++;
//		memset(check, 0, sizeof(check));
//	}
//	cout << res;
//	return 0;
//}