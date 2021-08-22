//#include <iostream>
//#include <queue>
//#include <string>
//#include <memory.h>
//using namespace std;
//char map[11][11];
//int check[11][11] = { 0 }, n, m, d[] = {1,0,-1,0 },gmin=11,rg=0,bg=0;
//class RC {
//public:
//	int row, col;
//	RC();
//	RC(int r, int c) {row = r; col = c;}
//};
//queue<pair<RC,int>>q;
//queue<RC>bq;
////0 : down, 1: right, 2; up, 3:left
////return  0,0 : move X, r+c!=0: move O, r =100: into goal
//int move(int r, int c,RC res, int dir,int red) {
//	int i;
//	//RC res = RC(0,0);
//	for (i = 0;; i++) {
//		r += d[dir] * i;
//		c += d[(dir + 3) % 4] * i;
//		if (map[r][c] == '#' || map[r][c] == 'B' || map[r][c] == 'R') {
//			res = RC(r - d[dir], c - d[(dir + 3) % 4]);
//			break;
//		}
//		if(red)
//			check[r][c] = 1;
//		if (map[r][c] == 'O'){
//			if (red) rg = 1;
//			else bg = 1;
//		}
//	}
//	if (i == 0)
//		return 0;
//	else
//		return 1;
//}
//void bfs() {
//	int rr, rc,br,bc,cnt,i,tmp[11][11],res1,res2;
//	RC rres,bres;
//	if (q.empty())
//		return;
//	rr = q.front().first.row;
//	rc = q.front().first.col;
//	map[rr][rc] = 'R';
//	cnt = q.front().second;
//	br = bq.front().row;
//	bc = bq.front().col;
//	map[br][bc] = 'B';
//	memcpy(tmp, map, sizeof(tmp));
//	bq.pop();
//	q.pop();
//	for (i = 0; i < 4; i++) {
//		memcpy(map, tmp, sizeof(tmp));
//		if(i==0){
//			if (rr > br) {
//				map[rr][rc] = '.';
//				res1 = move(rr, rc, rres, i, 1);
//				res2 = move(br, bc, bres, i, 0);
//				if (res1 && res2) {
//					q.push(make_pair(RC(rres.row, rres.col), cnt + 1));
//					bq.push(RC(bres.row, bres.col));
//				}
//				else
//					q.
//		
//				move(br, bc, res, i, 0); // move B
//				bq.push(RC(res.row, res.col));
//			}
//			else {
//
//			}
//		}
//
//	}
//
//
//	bfs();
//}
//
//int main() {
//	int i,j;
//	string s;
//	cin >> n >> m;
//	for (i = 0; i < n; i++) {
//		cin >> s;
//		for (j = 0; j < m; j++) {
//			map[i][j] = s[j];
//			if (s[j] == 'R'){
//				q.push(make_pair(RC(i,j),0));
//				check[i][j] = 1;
//			}
//			if (s[j] == 'B') 
//				bq.push({ i,j });
//		}
//	}
//	bfs();
//	if (gmin != 11)
//		cout << gmin;
//	else
//		cout << "-1";
//	return 0;
//}