//// https://www.acmicpc.net/problem/7569
//// 백준 7569 - 토마토
//// 관련 알고리즘 : BFS
//
//#include <iostream>
//#include <queue>
//using namespace std;
//short arr[101][101][101];
//class tri {
//public:
//	int r, c, h;
//	tri(int hei,int row, int col) {
//		r = row; 
//		c = col;
//		h = hei;
//	}
//};
//queue<pair<tri, int>> q; // (i,j,k),day
//int m, n,t, glo_day = 0, count0 = 0;
//void bfs() {
//	int r, c,h, day;
//	if (q.empty()) return;
//	h = q.front().first.h;
//	r = q.front().first.r;
//	c = q.front().first.c;
//	day = q.front().second;
//	if (day >= glo_day)
//		glo_day = day;
//	q.pop();
//	if (c - 1 >= 0 && arr[h][r][c - 1] == 0) {
//		q.push(make_pair(tri(h,r, c - 1), day + 1));
//		arr[h][r][c - 1] = 1;
//		count0--;
//	}
//	if (c + 1 < m && arr[h][r][c + 1] == 0) {
//		q.push(make_pair(tri(h,r, c + 1), day + 1));
//		arr[h][r][c + 1] = 1;
//		count0--;
//	}
//	if (r - 1 >= 0 && arr[h][r - 1][c] == 0) {
//		q.push(make_pair(tri(h,r - 1, c), day + 1));
//		arr[h][r - 1][c] = 1;
//		count0--;
//	}
//	if (r + 1 < n && arr[h][r + 1][c] == 0) {
//		q.push(make_pair(tri(h,r + 1, c), day + 1));
//		arr[h][r + 1][c] = 1;
//		count0--;
//	}
//	if (h + 1 < t && arr[h+1][r][c] == 0) {
//		q.push(make_pair(tri(h+1, r, c), day + 1));
//		arr[h+1][r][c] = 1;
//		count0--;
//	}
//	if (h - 1 >= 0 && arr[h - 1][r][c] == 0) {
//		q.push(make_pair(tri(h-1, r, c), day + 1));
//		arr[h - 1][r][c] = 1;
//		count0--;
//	}
//	bfs();
//}
//int main() {
//	int i, j,k; // n row, m col
//	cin >> m >> n>>t;
//	for(k=0;k<t;k++)
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++) {
//				cin >> arr[k][i][j];
//				if (arr[k][i][j] == 1)
//					q.push(make_pair(tri(k,i,j), 0));
//				else if (arr[k][i][j] == 0)
//					count0++;
//			}
//	if (count0 != 0) {
//		bfs();
//		if (glo_day != 0 && count0 == 0)
//			cout << glo_day;
//		else if (count0 != 0)
//			cout << "-1";
//	}
//	else
//		cout << "0";
//	return 0;
//}