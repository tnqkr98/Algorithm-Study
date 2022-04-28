#include <iostream>
using namespace std;
int mp[500][500], d[4][2] = { {0,-1},{1,0},{0,1},{-1,0} },n,out=0;
bool range(int r,int c) {
	return r >= 0 && c >= 0 && r < n && c < n;
}
void spread(int r,int c,int dir) {
	double ra[] = { 0.01,0.01,0.02,0.02,0.07,0.07,0.1,0.1,0.05 };
	int s1[9][2]={{1,1},{-1,1},{-2,0},{2,0},{-1,0},{1,0},{-1,-1},{1,-1},{0,-2}};
	int s2[9][2] = {{-1,-1},{-1,1},{0,-2},{0,2},{0,-1},{0,1},{1,1},{1,-1},{2,0}};
	int s3[9][2] = {{-1,-1},{1,-1},{-2,0},{2,0},{-1,0},{1,0},{1,1},{-1,1},{0,2}};
	int s4[9][2] = {{1,-1},{1,1},{0,-2},{0,2},{0,-1},{0,1},{-1,-1},{-1,1},{-2,0}};
	double cur = mp[r][c];
	int difsum = 0;
	for (int i = 0; i < 9; i++) {
		int nr, nc;
		if (dir == 0) {
			nr = r + s1[i][0];
			nc = c + s1[i][1];
		}
		if (dir == 1) {
			nr = r + s2[i][0];
			nc = c + s2[i][1];
		}
		if (dir == 2) {
			nr = r + s3[i][0];
			nc = c + s3[i][1];
		}
		if (dir == 3) {
			nr = r + s4[i][0];
			nc = c + s4[i][1];
		}
		if (range(nr, nc)) mp[nr][nc] += (int)(cur * ra[i]);
		else out+= (int)(cur * ra[i]);
		difsum += (int)(cur * ra[i]);
	}
	int lr, lc;
	lr = r + d[dir][0];
	lc = c + d[dir][1];
	if(range(lr,lc)) mp[lr][lc] += (mp[r][c] - difsum);
	else out += (mp[r][c] - difsum);
	mp[r][c] = 0;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) cin >> mp[i][j];
	int cr = n / 2, cc = n / 2, dir = 0;
	bool flag = false;
	for (int s = 1; s <= n; s++) {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < s; j++) {
				cr += d[dir][0];
				cc += d[dir][1];
				if (!range(cr, cc))continue;
				spread(cr, cc,dir);
				if (cr == 0 && cc == 0) {
					flag = 1;
					break;
				}
			}
			dir++;
			dir %= 4;
			if (flag) break;
		}
		if (flag) break;
	}
	cout << out;
	return 0;
}