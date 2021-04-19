#include <iostream>
using namespace std;
int r, c, t,map[51][51];
int tr, br, op[4][2] = {{1,0},{0,1},{0,-1},{-1,0}};
void swap(int ar, int ac, int br, int bc) {
	int tmp = map[ar][ac];
	map[ar][ac] = map[br][bc];
	map[br][bc] = tmp;
}
void spread() {
	int smap[51][51] = { 0 };
	int rmap[51][51] = { 0 };
	for (int i = 0; i < r; i++) 
		for (int j = 0; j < c; j++) 
			if (map[i][j] != -1) {
				int xx = map[i][j];
				for (int k = 0; k < 4; k++) {
					int nr, nc;
					nr = i + op[k][0];
					nc = j + op[k][1];
					if (map[nr][nc] != -1 && nr >= 0 && nc >= 0 && nr < r && nc < c) {
						smap[nr][nc] += map[i][j] / 5;
						xx -= map[i][j] / 5;
					}
				}
				rmap[i][j] = xx;
			}
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) 
			if(map[i][j]!=-1)
				map[i][j] = smap[i][j] + rmap[i][j];
}
void clear() {
	map[tr - 1][0] = 0;
	for (int i = tr - 2; i >= 0; i--) 
		swap(i + 1, 0, i, 0);
	for (int i = 1; i < c; i++)
		swap(0, i - 1, 0, i);
	for (int i = 1; i <= tr; i++)
		swap(i - 1, c - 1, i, c - 1);
	for (int i = c - 2; i > 0; i--)
		swap(tr, i + 1, tr, i);
	map[br + 1][0] = 0;
	for (int i = br + 2; i < r; i++)
		swap(i - 1, 0, i, 0);
	for (int i = 1; i < c; i++)
		swap(r - 1, i - 1, r - 1, i);
	for (int i = r - 2; i >= br; i--)
		swap(i + 1, c - 1, i, c - 1);
	for (int i = c - 2; i > 0; i--)
		swap(br, i + 1, br, i);
}
int main() {
	int sum = 0;
	bool first = false;
	cin >> r >> c >> t;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) {
			cin >> map[i][j];
			if (map[i][j] == -1 && !first) {
				tr = i;
				first = 1;
			}
			else if (map[i][j] == -1) 
				br = i;
		}
	while (t > 0) {
		spread();
		clear();
		t--;
	}
	for(int i=0;i<r;i++)
		for (int j = 0; j < c; j++) {
			if (map[i][j] != -1)
				sum += map[i][j];
		}
	cout << sum;
	return 0;
}