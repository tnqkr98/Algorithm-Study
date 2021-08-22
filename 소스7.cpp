//#include <iostream>
//#include <queue>
//#include <memory.h>
//#include <vector>
//using namespace std;
//typedef struct {
//	int r, c, d;
//}rcd;
//bool check[101][101] = { 0 };
//int map[101][101], n, d;
//int idr[4] = { 0,1,0,-1 }, idc[4] = { 1,0,-1,0 };
//vector<rcd> v;
//queue<rcd> q;
//
//int find2() {
//	int c = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++)
//			if (map[i][j] == 2)
//				c++;
//	}
//	return c;
//}
//
//void bfs() {
//	if (q.empty())
//		return;
//	int r, c, len;
//	r = q.front().r;
//	c = q.front().c;
//	map[r][c] = 2;
//	len = q.front().d;
//	q.pop();
//	for (int i = 0; i < 4; i++) {
//		int tr, tc;
//		tr = r + idr[i];
//		tc = c + idc[i];
//		if (tr >= 0 && tr < n && tc >= 0 && tc < n && !check[tr][tc] && !map[tr][tc]) 
//			if (len + 1 < d+1) {
//				q.push({ tr,tc,len + 1 });
//				check[tr][tc] = 1;
//			}
//	}
//	bfs();
//}
//
//int main() {
//	int max = 0;
//	cin >> n >> d;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			int t;
//			cin >> t;
//			map[i][j] = t;
//			if (t == 0) v.push_back({ i,j });
//		}
//	}
//	int dmap[101][101];
//	memcpy(dmap, map, sizeof(map));
//	for (int i = 0; i < v.size(); i++) {
//		q.push({ v[i].r,v[i].c });
//		check[v[i].r][v[i].c] = 1;
//		bfs();
//		int c = find2();
//		if (c > max) max = c;
//		memcpy(map, dmap, sizeof(map));
//		memset(check, 0, sizeof(check));
//	}
//	cout << max;
//	return 0;
//}