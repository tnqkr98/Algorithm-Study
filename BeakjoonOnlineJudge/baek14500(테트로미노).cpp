// https://www.acmicpc.net/problem/14500
// 백준 14500번 : 테트로미노
// 관련 알고리즘 : Brute Force

#include <iostream>
using namespace std;
int main() {
	int poly[19][8] = {
	{0,0,1,0,2,0,3,0},
	{0,0,0,1,1,0,1,1},
	{0,0,0,1,0,2,0,3},
	{0,1,1,0,1,1,1,2},
	{0,0,0,1,0,2,1,1},
	{0,1,1,1,2,1,2,0},
	{0,0,1,0,2,0,2,1},
	{0,0,0,1,1,1,2,1},
	{0,0,0,1,1,0,2,0},
	{0,1,1,0,1,1,2,1}, 
	{0,0,1,0,1,1,2,0},
	{0,0,1,0,1,1,1,2},
	{0,0,0,1,0,2,1,0},
	{0,0,0,1,0,2,1,2},
	{0,2,1,0,1,1,1,2},
	{0,1,1,0,1,1,2,0},
	{0,0,1,0,1,1,2,1},
	{0,0,0,1,1,1,1,2},
	{0,1,0,2,1,0,1,1}}, n, m, i, j, k, sum = 0, max = 0;
	short arr[501][501];
	cin >> n >> m;
	for (i = 0; i < n; i++) 
		for (j = 0; j < m; j++) 
			cin >> arr[i][j];
	
	for (i = 0; i < 19; i++) 
		for (j = 0; j < n; j++) 
			for (k = 0; k < m; k++) {
				if (poly[i][0] + j < n && poly[i][1] + k < m &&
					poly[i][2] + j < n && poly[i][3] + k < m &&
					poly[i][4] + j < n && poly[i][5] + k < m &&
					poly[i][6] + j < n && poly[i][7] + k < m)
					sum = arr[poly[i][0] + j][poly[i][1] + k]
					+ arr[poly[i][2] + j][poly[i][3] + k]
					+ arr[poly[i][4] + j][poly[i][5] + k]
					+ arr[poly[i][6] + j][poly[i][7] + k];
				if (sum > max)
					max = sum;
			}
	cout << max;
	return 0;
}