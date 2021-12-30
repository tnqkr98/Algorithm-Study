#include <iostream>
#include <deque>
#include <string>
#define INF 1e9
using namespace std;
struct rc {int r, c;};
int M[100][100], n, m, d[100][100], id[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
bool bcheck(int r, int c) {
	return r >= 0 && c >= 0 && r < n&&c < m;
}
void bfs() {
	deque<rc> dq;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			d[i][j] = INF;
	d[0][0] = 0;
	dq.push_back({ 0,0 });
	while (!dq.empty()) {
		auto cur = dq.front();
		dq.pop_front();
		for (int i = 0; i < 4; i++) {
			int nr, nc;
			nr = cur.r + id[i][0];
			nc = cur.c + id[i][1];
			if (bcheck(nr,nc) && d[cur.r][cur.c] + M[nr][nc] < d[nr][nc]) {
				d[nr][nc] = d[cur.r][cur.c] + M[nr][nc];
				if (M[nr][nc] == 0)		// 가중치가 0이면 데큐 앞에
					dq.push_front({ nr,nc });
				else					// 가중치가 1이면 데큐 뒤에
					dq.push_back({ nr,nc });
			}
		}
	}
}
int main() {
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		for (int j = 0; j < m; j++)
			M[i][j] = s[j] - '0';
	}
	bfs();
	cout << d[n - 1][m - 1];
	return 0;
}