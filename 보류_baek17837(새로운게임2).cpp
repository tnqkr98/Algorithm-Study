//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//typedef struct {int num, d;} ND;
//int n, k, color[13][13], dir[4][2] = {{0,1},{0,-1},{-1,0},{1,0} };
//vector<ND> map[13][13];
//bool isClear() {
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			if (map[i][j].size() == 4)
//				return true;
//	return false;
//}
//void mmove(int r,int c,int nr,int nc,int red,vector<ND> top) {
//	if (red == 0) {
//		for (int i = 0; i < top.size(); i++) {
//			map[r][c].pop_back();
//			map[nr][nc].push_back(top[i]);
//		}
//	}
//	else {
//		reverse(top.begin(), top.end());
//		for (int i = 0; i < top.size(); i++) {
//			map[r][c].pop_back();
//			map[nr][nc].push_back(top[i]);
//		}
//	}
//}
//int main() {
//	int turn = 0;
//	cin >> n >> k;
//	for(int i=0;i<n;i++)
//		for (int j = 0; j < n; j++) 
//			cin >> color[i][j];
//	for (int i = 0; i < k; i++) {
//		int r, c, d;
//		cin >> r >> c >> d;
//		map[r - 1][c - 1].push_back({ i+1,d-1 });
//	}
//	while (!isClear()) {
//		turn++;
//		if (turn > 1000) {
//			turn = -1;
//			break;
//		}
//		for (int num = 1; num <= k; num++) {
//			if (isClear()) break;
//			int r, c,d, nr, nc;
//			vector<ND> top;
//			for (int i = 0; i < n; i++) 
//				for (int j = 0; j < n; j++) {
//					bool find = false;
//					for (auto nd : map[i][j]) {
//						if (find) top.push_back(nd);
//						if (nd.num == num) {
//							r = i;
//							c = j;
//							d = nd.d;
//							find = true;
//							top.push_back(nd);
//						}
//					}
//				}
//			nr = r + dir[d][0];
//			nc = c + dir[d][1];
//			if (nr >= 0 && nr < n && nc >= 0 && nc < n && color[nr][nc] != 2) {
//				mmove(r, c, nr, nc, color[nr][nc],top);
//				continue;
//			}
//			if (d == 0) d = 1;
//			else if (d == 1) d = 0;
//			else if (d == 2) d = 3;
//			else d = 2;
//			nr = r + dir[d][0];
//			nc = c + dir[d][1];
//			if (nr >= 0 && nr < n && nc >= 0 && nc < n && color[nr][nc] != 2) {
//				top[0].d = d;
//				mmove(r, c, nr, nc, color[nr][nc],top);
//				continue;
//			}
//			for (int l = 0; l < map[r][c].size(); l++) 
//				if (map[r][c][l].num == num)
//					map[r][c][l].d = d;
//		}
//	}
//	cout << turn;
//	return 0;
//}