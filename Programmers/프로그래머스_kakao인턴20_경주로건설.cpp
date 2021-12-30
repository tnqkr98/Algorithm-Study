#include <vector>
#include <memory.h>
using namespace std;
int op[4][2] = { {0,1},{1,0},{0,-1},{-1,0} }, n, chk[26][26], dp[26][26];
vector<vector<int>> map;
void dfs(int r, int c, int d, int cost) {
	for (int nd = 0; nd < 4; nd++) {
		int nr, nc;
		nr = r + op[nd][0];
		nc = c + op[nd][1];
		if (nr >= 0 && nr < n && nc >= 0 && nc < n && !chk[nr][nc] && !map[nr][nc]) {
			chk[nr][nc] = 1;
			if ((nd == d && cost + 100 <= dp[nr][nc]) || (r == 0 && c == 0)) {
				dp[nr][nc] = cost + 100;
				dfs(nr, nc, nd, cost + 100);
			}
			else if (cost + 600 <= dp[nr][nc]) {
				dp[nr][nc] = cost + 600;
				dfs(nr, nc, nd, cost + 600);
			}
			chk[nr][nc] = 0;
		}
	}
}
int solution(vector<vector<int>> board) {
	map = board;
	n = board.size();
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			dp[i][j] = 100000000;
	chk[0][0] = 1;
	dfs(0, 0, 0, 0);
	return dp[n - 1][n - 1];
}