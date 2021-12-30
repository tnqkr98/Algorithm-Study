//#include <iostream>
//#include <string>
//using namespace std;
//char map[21][21];
//bool alpha[30];
//int d[4][2] = { {0,1},{0,-1}, {1,0},{-1,0} },r,c,mmax=0;
//void dfs(int sr,int sc,int depth) {
//	if (depth > mmax) mmax = depth;
//	for (int i = 0; i < 4; i++) {
//		int nr, nc;
//		nr = sr + d[i][0];
//		nc = sc + d[i][1];
//		
//		if (nr>=0 && nc>=0 && nr<r&& nc<c&&!alpha[map[nr][nc] - 'A']) {
//			alpha[map[nr][nc] - 'A'] = 1;
//			dfs(nr, nc, depth + 1);
//			alpha[map[nr][nc] - 'A'] = 0;
//		}
//	}
//}
//int main() {
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) {
//		string s;
//		cin >> s;
//		for (int j = 0; j < c; j++)
//			map[i][j] = s[j];
//	}
//	alpha[map[0][0] - 'A'] = 1;
//	dfs(0, 0, 1);
//	cout << mmax;
//	return 0;
//}