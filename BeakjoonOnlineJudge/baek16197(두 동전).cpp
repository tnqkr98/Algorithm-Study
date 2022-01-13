#include <iostream>
#include <string>
using namespace std;
struct rc {int r, c;};
char map[21][21];
rc a, b;
int gmin = 1e9, d[4][2] = { {1,0},{-1,0},{0,1},{0,-1} },n,m;
bool outcheck(rc v) {
	return v.r >= n || v.c >= m || v.r < 0 || v.c < 0;
}
void back(int cnt) {
	if ((cnt > gmin || cnt>10)||(outcheck(a) && outcheck(b))) return;
	if ((outcheck(a) && !outcheck(b)) ||(!outcheck(a) && outcheck(b))) {
		if (gmin > cnt) gmin = cnt;
		return;
	}
	for (int i = 0; i < 4; i++) {
		bool af=0, bf=0;
		if (map[a.r + d[i][0]][a.c + d[i][1]] != '#') {
			af = 1;
			a.r += d[i][0]; 
			a.c += d[i][1];
		}
		if (map[b.r + d[i][0]][b.c + d[i][1]] != '#') {
			bf = 1;
			b.r += d[i][0]; 
			b.c += d[i][1];
		}
		if (!(a.r == b.r && a.c == b.c)) back(cnt + 1);
		if (af) { a.r -= d[i][0]; a.c -= d[i][1]; }
		if (bf) { b.r -= d[i][0]; b.c -= d[i][1]; }
	}
}
int main() {
	cin >> n >> m;
	bool f = 0;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		for (int j = 0; j < m; j++) {
			map[i][j] = s[j];
			if (s[j] == 'o'&&!f) {
				a = { i,j };
				f = 1;
			}
			else if (s[j] == 'o') b = { i,j };
		}
	}
	back(0);
	if (gmin == 1e9) cout << -1;
	else cout << gmin;
	return 0;
}