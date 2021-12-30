//https://www.acmicpc.net/problem/14503
//백준 14503번 : 청소기
//관련 알고리즘 : Simulation

#include <iostream>
using namespace std;
int main() {
	int n, m, sr, sc, d, i, j, arr[50][50], move,back=0,dir,cnt=0;
	cin >> n>>m;
	cin >> sr >> sc >> d;
	for (i = 0; i < n; i++) 
		for (j = 0; j < m; j++) 
			cin >> arr[i][j];
	if (d == 1)
		d = 3;
	else if (d == 3)
		d = 1;
	
	while (1) {
		if (!back) {
			arr[sr][sc] = 2;
			cnt++;
		}
		move = 0;
		back = 0;
		
		for (i = 1; i < 5; i++) {
			dir = d +i;
			dir %= 4;	
			if (dir== 0 && sr-1 >=0&& arr[sr-1][sc] == 0){
				sr = sr-1;
				move = 1;
				break;
			}
			else if (dir == 3 &&sc+1 <m&& arr[sr][sc+1] == 0) {
				sc = sc+1;
				move = 1;
				break;
			}
			else if (dir == 2&&sr+1<n && arr[sr+1][sc] == 0) {
				sr = sr + 1;
				move = 1;
				break;
			}
			else if (dir == 1 &&sc-1>=0&& arr[sr][sc - 1] == 0) {
				sc = sc - 1;
				move = 1;
				break;
			}
		}
		if (!move) {
			if (d == 0 && sr + 1 < n && arr[sr + 1][sc] != 1) {
				sr = sr + 1;
				back = 1;
			}
			else if (d == 1 && sc + 1 >= 0&& arr[sr][sc +1] != 1) {
				sc = sc + 1;
				back = 1;
			}
			else if (d == 2 && sr-1 >=0&& arr[sr - 1][sc] != 1) {
				sr = sr - 1;
				back = 1;
			}
			else if (d == 3 && sc - 1 <m && arr[sr][sc - 1] != 1) {
				sc = sc -1;
				back = 1;
			}
		}
		else
			d = dir;

		if (!back && !move)
			break;
	}
	cout << cnt;
	return 0;
}