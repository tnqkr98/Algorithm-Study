#include <iostream>
#include <cmath>
#include <memory.h>
#include <queue>
#include <algorithm>
using namespace std;
int arr[65][65], n, q,l,len,d[4][2] = { {0,1},{0,-1},{1,0},{-1,0} },mmax=0;
int visit[65][65],bfscnt=0,sum=0;
queue<pair<int, int>>qu;
void rotate(int r, int c, int len) {
	int tarr[65][65];
	memcpy(tarr, arr, sizeof(arr));
	for (int i = 0; i < len; i++) 
		for (int j = 0; j < len; j++) 
			arr[r+j][c+len-i-1] = tarr[r+i][c+j];
}
void reduce() {
	int tarr[65][65] = { 0 };
	for(int i=0;i<len;i++)
		for (int j = 0; j < len; j++) {
			if (arr[i][j] == 0) continue;
			for (int k = 0; k < 4; k++) {
				int nr, nc;
				nr = i + d[k][0];
				nc = j + d[k][1];
				if (nr >= 0 && nr >= 0 && nr < len&& nc < len) {
					if (arr[nr][nc] == 0) 
						tarr[i][j]++;
				}
				else
					tarr[i][j]++;
			}
		}
	for (int i = 0; i < len; i++)
		for (int j = 0; j < len; j++)
			if (tarr[i][j] > 1)
				arr[i][j]--;
}
void bfs() {
	if (qu.empty()) return;
	int r = qu.front().first;
	int c = qu.front().second;
	bfscnt++;
	sum += arr[r][c];
	qu.pop();
	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = r + d[i][0];
		nc = c + d[i][1];
		if (nr >= 0 && nc >= 0 && nr < len&&nc < len&&arr[nr][nc] != 0&&!visit[nr][nc]) {
			qu.push({ nr,nc });
			visit[nr][nc] = 1;
		}
	}
	bfs();
}
int main() {
	cin >> n >> q;
	len = pow(2, n);
	for (int i = 0; i < len; i++)
		for (int j = 0; j < len; j++)
			cin >> arr[i][j];
	for (int i = 0; i < q; i++) {
		cin >> l;
		int slen = pow(2, l);
		for (int r = 0; r < len; r +=slen)
			for (int c = 0; c < len; c +=slen)
				rotate(r, c, slen);
		reduce();
	}
	for(int i=0;i<len;i++)
		for (int j = 0; j < len; j++) {
			bfscnt = 0;
			if (arr[i][j] != 0 && !visit[i][j]) {
				qu.push({ i,j });
				visit[i][j] = 1;
				bfs();
				mmax = max(mmax, bfscnt);
			}
		}

	cout << sum <<endl<< mmax;
	return 0;
}