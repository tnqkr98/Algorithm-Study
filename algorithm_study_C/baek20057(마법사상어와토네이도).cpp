//#include <iostream>
//using namespace std;
//int map[500][500];
//int chk[500][500];
//double por[10] = { 0.01,0.01,0.07,0.07,0.02,0.02,0.1,0.1,0.05 };
//int n;
//int main() {
//	int dir = -1, r, c,sum = 0;
//	int move[4][2] = { {0,-1} ,{1,0},{0,1},{-1,0}};
//	int tor[4][10][2] = {
//		{{-1,1},{1,1},{-1,0},{1,0},{-2,0},{2,0},{-1,-1},{1,-1},{0,-2},{0,-1}},
//		{{-1,-1},{-1,1},{0,-1},{0,1},{0,-2},{0,2},{1,-1},{1,1},{2,0},{1,0}},
//		{{-1,-1},{1,-1},{-1,0},{1,0},{-2,0},{2,0},{-1,1},{1,1},{0,2},{0,1}},
//		{{1,-1},{1,1},{0,-1},{0,1},{0,-2},{0,2},{-1,-1},{-1,1},{-2,0},{-1,0}}
//	};
//
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			cin >> map[i][j];
//	r = c = n/2;
//	chk[r][c] = 1;
//	while (1) {
//		if (r == 0 && c == 0) break;
//		dir = (dir + 1) % 4;
//		int dr, dc;
//		dr = r + move[dir][0];
//		dc = c + move[dir][1];
//		if (chk[dr][dc] || dr <0 || dc <0 || dr >n-1 || dc > n-1) {
//			dir-=1;
//			if (dir == -1) dir = 3;
//			dr = r + move[dir][0];
//			dc = c + move[dir][1];
//		}
//		chk[dr][dc] = 1;
//
//		int sand = map[dr][dc];
//		for (int i = 0; i < 10; i++) {
//			int tr = dr + tor[dir][i][0];
//			int tc = dc + tor[dir][i][1];
//			
//			if (tr >= 0 && tc >= 0 && tr < n && tc < n) {
//				if (i == 9) {
//					map[tr][tc] += sand;
//					break;
//				}
//				map[tr][tc] += (int)(por[i] * map[dr][dc]);
//			}
//			else {
//				if (i == 9) {
//					sum += sand;
//					break;
//				}
//				sum += (int)(por[i] * map[dr][dc]);
//			}
//			sand -= (int)(por[i] * map[dr][dc]);
//		}
//		map[dr][dc] = 0;
//		r = dr; c = dc;
//	}
//	cout << sum;
//	return 0;
//}