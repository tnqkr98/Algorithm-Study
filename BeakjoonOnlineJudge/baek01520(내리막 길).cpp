#include <iostream>
using namespace std;
int map[501][501],dp[501][501],d[4][2] = { {0,1},{0,-1},{1,0},{-1,0} },m, n;
int visit[501][501];
int dfs(int r,int c) {
	
	if (r == m - 1 && c == n - 1) return 1;
	if (visit[r][c]) return dp[r][c];
	visit[r][c] = 1;

	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = r + d[i][0];
		nc = c + d[i][1];
		if (nr >= 0 && nc >= 0 && nr < m&&nc < n&&map[nr][nc] < map[r][c]) {
			dp[r][c] += dfs(nr, nc);
		}
	}
	return dp[r][c];
}
int main() {
	cin >> m >> n;
	for(int i=0;i<m;i++)
		for (int j = 0; j < n; j++) 
			cin >> map[i][j];
	dfs(0, 0);
	cout << dp[0][0];
	return 0;
}