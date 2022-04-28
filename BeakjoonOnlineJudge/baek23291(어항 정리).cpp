#include <iostream>
#include <algorithm>
#include <memory.h>
using namespace std;
int mp[101][101],top[101],n,k;
void addfish() {
	int min = *min_element(mp[n], mp[n] + n);
	for (int i = 0; i < n; i++) 
		if (min == mp[n][i]) mp[n][i]++;
}
void step1() {
	mp[n - 1][1] = mp[n][0];
	mp[n][0] = 0; top[0] = 0;
	top[1] = 2;
	while (1) {
		int one = 0,p;
		for (p = n - 1; top[p] == 1; p--) one++;
		if (one < top[p]) break;	
		int tr = n - 1;
		for (int tp = p; top[tp] != 0; tp--) {
			for (int i = 0; i < top[tp]; i++) {
				mp[tr][p + 1 + i] = mp[n - i][tp];
				mp[n - i][tp] = 0;
				top[p + 1 + i]++;
			}
			top[tp] = 0;
			tr--;
		}
		
	}
}
void consen() {
	int st[101][101] = { 0 };
	int d[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
	for(int i=0;i<=n;i++)
		for (int j = 0; j < n; j++) {
			if (!mp[i][j]) continue;
			for (int k = 0; k < 4; k++) {
				int nr, nc;
				nr = i + d[k][0];
				nc = j + d[k][1];
				if (nr >= 0 && nc >= 0 && nr <= n && nc < n&&mp[nr][nc]) {
					int val = (mp[i][j] - mp[nr][nc])/5;
					st[i][j] -= val;
				}
			}
		}
	for (int i = 0; i <= n; i++)
		for (int j = 0; j < n; j++) mp[i][j] += st[i][j];
}
void step2() {
	for (int c = 0; c < n/2; c++) {
		mp[n - 1][n - 1 - c] = mp[n][c];
		mp[n][c] = 0;
		top[n - 1 - c]++;
		top[c]--;
	}
	int ec = n - 1;
	for (int c = n / 2; c < n / 2 + n / 4; c++) {
		top[ec] += 2;
		top[c] -= 2;
		mp[n - 2][ec] = mp[n-1][c];
		mp[n - 3][ec--] = mp[n][c];
		mp[n - 1][c] = 0;
		mp[n][c] = 0;
	}
}
void spread() {
	int nmp[101],np=0;
	for (int p=0; p<n; p++) {
		if (!top[p]) continue;
		for (int i = 0; i < top[p]; i++) 
			nmp[np++] = mp[n-i][p];
	}
	memset(mp, 0, sizeof(mp));
	for (int i = 0; i < n; i++) {
		mp[n][i] = nmp[i];
		top[i] = 1;
	}
}
bool minmaxdif() {
	int min = 1e9, max = 0;
	for (int i = 0; i < n; i++) {
		if (min > mp[n][i]) min = mp[n][i];
		if (max < mp[n][i]) max = mp[n][i];
	}
	if (max - min <= k) return 1;
	else return 0;
}
int main() {
	int cnt = 0; cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		mp[n][i] = t;
		top[i] = 1;
	}
	while (1) {
		cnt++;
		addfish();
		step1();
		consen();
		spread();
		step2();
		consen();
		spread();
		if (minmaxdif()) break;
	}
	cout << cnt;
	return 0;
}