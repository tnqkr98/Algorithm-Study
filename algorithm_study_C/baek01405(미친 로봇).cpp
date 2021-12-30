#include <iostream>
using namespace std;
int visit[30][30], r = 14, c = 14, id[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
double e, w, s, n, p,dp[4],res=0;
void backtrack(int d) {
	if (d == 0) {
		res += p;
		return;
	}
	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = r + id[i][0];
		nc = c + id[i][1];
		if (!visit[nr][nc] && dp[i]!=0) {
			r += id[i][0]; c += id[i][1];
			visit[r][c] = 1;
			p *= dp[i];
			backtrack(d - 1);
			p /= dp[i];
			visit[r][c] = 0;
			r -= id[i][0]; c -= id[i][1];
		}
	}
}
int main() {
	int N;
	cin >>N >> e >> w >> s >> n;
	e /= 100; w /= 100; s /= 100; n /= 100;
	dp[0] = e; dp[1] = w; dp[2] = s; dp[3] = n;
	p = 1;
	visit[r][c] = 1;
	backtrack(N);
	cout.precision(16);
	cout << res;
	return 0;
}