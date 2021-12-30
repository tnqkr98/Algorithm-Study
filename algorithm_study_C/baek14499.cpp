////https://www.acmicpc.net/problem/14499
//// 백준 14499번 : 주사위 굴리기
//// 관련 알고리즘 : Simulation
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int n, m, r, c, k, i, j, arr[20][20], t, tmp, move = 0;
//	vector<int>v;
//	int s[7] = {0};
//	cin >> n >> m >> r >> c >> k;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++)
//			cin >> arr[i][j];
//
//	if (!arr[r][c])
//		arr[r][c] = s[6];
//	else {
//		s[6] = arr[r][c];
//		arr[r][c] = 0;
//	}
//	for (i = 0; i < k; i++) {
//		move = 0;
//		cin >> t;
//		tmp = s[6];
//		if (t == 1 && c + 1 < m) {
//			c += 1;
//			s[6] = s[3]; s[3] = s[1];
//			s[1] = s[4]; s[4] = tmp;
//			move = 1;
//		}
//		else if (t == 2 && c-1>=0) {
//			c -= 1;
//			s[6] = s[4]; s[4] = s[1];
//			s[1] = s[3]; s[3] = tmp;
//			move = 1;
//		}
//		else if (t == 3 && r-1 >=0) {
//			r -= 1;
//			s[6] = s[2]; s[2] = s[1];
//			s[1] = s[5]; s[5] = tmp;
//			move = 1;
//		}
//		else if(t==4 && r+1 <n){
//			r += 1;
//			s[6] = s[5]; s[5] = s[1];
//			s[1] = s[2]; s[2] = tmp;
//			move = 1;
//		}
//
//		if (move) {
//			if (!arr[r][c])
//				arr[r][c] = s[6];
//			else {
//				s[6] = arr[r][c];
//				arr[r][c] = 0;
//			}
//			v.push_back(s[1]);
//		}
//	}
//	for (int i : v)
//		cout << i << endl;
//
//	return 0;
//}