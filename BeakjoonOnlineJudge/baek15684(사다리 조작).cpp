#include <iostream>
using namespace std;
int n, m,h,addd=0,mmin = 1e9;
int hori[272][11];
int start(int s) {	
	for (int i = 1; i <= h; i++) {
		if (hori[i][s]) s = s + 1;
		else if (hori[i][s - 1]) s = s - 1;
	}
	return s;
}
bool isOk() {
	for (int i = 1; i <= n; i++) {
		if (i == start(i)) continue;
		else return 0;
	}
	return 1;
}
void back(int r) {
	if (addd > 3) return;
	if (isOk()) {
		if (mmin > addd) 
			mmin = addd;
	}
	for (int i = r; i <= h; i++) {
		for (int j = 1; j < n; j++) {
			if (!hori[i][j] && !hori[i][j-1] && !hori[i][j+1]) {
				hori[i][j] = 2;
				addd++;
				back(i);
				addd--;
				hori[i][j] = 0;
			}
		}
	}
}
int main() {
	cin >> n >> m >> h;
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		hori[a][b] = 1;
	}
	back(1);
	if (mmin<=3) cout << mmin;
	else cout << -1;
	return 0;
}