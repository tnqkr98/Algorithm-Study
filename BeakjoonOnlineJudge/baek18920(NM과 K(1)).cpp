#include <iostream>
using namespace std;
struct rc {int r, c;};
int n, m, k, mmax = -10001, d[4][2] = { {0,1}, {0,-1},{1,0},{-1,0} };
int map[11][11];
bool visit[11][11];
bool check(int r, int c) {
	return r >= 0 && c >= 0 && r < n&&c < m;
}
bool isOk(int r, int c) {
	for (int i = 0; i < 4; i++) 
		if (check(r+d[i][0], c+d[i][1]) && visit[r + d[i][0]][c + d[i][1]])
			return false;
	return true;
}
void back(int r,int c,int dep,int val) {
	if (dep == k) {
		if (val > mmax) mmax = val;
		return;
	}
	for(int i=r;i<n;i++)
		for (int j = 0; j < m; j++) {
			if (i == r && j < c) continue;
			if (!visit[i][j] && isOk(i,j)) {
				visit[i][j] = 1;
				back(i, j+1, dep + 1, val + map[i][j]);
				visit[i][j] = 0;
			}
		}
}
int main() {
	cin >> n >> m >> k;
	for(int i=0;i<n;i++)
		for (int j = 0; j < m; j++) 
			cin >> map[i][j];
	back(0,0,0,0);
	cout << mmax;
	return 0;
}