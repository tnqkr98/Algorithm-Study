#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
struct node { int f, b, r, c; };
int mp[21][21], n, d[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
bool cmp(node a, node b) {
	if (a.f > b.f) return 1;
	else if (a.f == b.f) {
		if (a.b > b.b) return 1;
		else if (a.b == b.b) {
			if (a.r < b.r) return 1;
			else if (a.r == b.r) {
				if (a.c < b.c) return 1;
			}
		}
	}
	return 0;
}
int findf(vector<bool> like, int r, int c) {
	int cnt = 0;
	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = r + d[i][0];
		nc = c + d[i][1];
		if (nr >= 0 && nc >= 0 && nr < n &&nc < n && like[mp[nr][nc]])
			cnt++;
	}
	return cnt;
}
int findb(vector<bool> like, int r, int c) {
	int cnt = 0;
	for (int i = 0; i < 4; i++) {
		int nr, nc;
		nr = r + d[i][0];
		nc = c + d[i][1];
		if (nr >= 0 && nc >= 0 && nr < n &&nc < n && mp[nr][nc] == 0)
			cnt++;
	}
	return cnt;
}
int main() {
	cin >> n;
	int t = n * n, res = 0;
	vector<vector<bool>> likev(401);
	while (t--) {
		int cur; cin >> cur;
		vector<bool> like(401);
		vector<node> v;
		for (int i = 0; i < 4; i++) {
			int f; cin >> f;
			like[f] = 1;
		}
		likev[cur] = like;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (!mp[i][j])
					v.push_back({ findf(like,i,j),findb(like,i,j),i,j });

		sort(v.begin(), v.end(), cmp);
		mp[v[0].r][v[0].c] = cur;
	}
	for(int i=0;i<n;i++)
		for (int j = 0; j < n; j++) 
			res += pow(10, findf(likev[mp[i][j]], i, j) - 1);
	cout << res;
	return 0;
}