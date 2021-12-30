#include <iostream>
#include <algorithm>
using namespace std;
int n,d[61][61][61]; // 체력이 a,b,c 일때 공격하는 최소 횟수
int dm[6][3] = { {9,3,1},{9,1,3},{3,9,1},{3,1,9},{1,3,9},{1,9,3} };
int dmg(int a,int b,int c) {
	//cout << a << " " << b << " " << c << " "<<endl;
	if (a == 0 && b == 0 && c == 0) return 0;
	if (d[a][b][c] != 1e9) return d[a][b][c];
	for (int i = 0; i < 6; i++) {
		int na, nb, nc;
		if (a - dm[i][0] >= 0) na = a - dm[i][0];
		else na = 0;
		if (b - dm[i][1] >= 0) nb = b - dm[i][1];
		else nb = 0;
		if (c - dm[i][2] >= 0) nc = c - dm[i][2];
		else nc = 0;
		d[a][b][c] = min(d[a][b][c], dmg(na,nb,nc)+1);
	}
	return d[a][b][c];
}
int main() {
	int scv[3] = { 0 };
	cin >> n;
	for (int i = 0; i < 61; i++)
		for (int j = 0; j < 61; j++)
			for (int k = 0; k < 61; k++) d[i][j][k] = 1e9;
	for (int i = 0; i < n; i++) cin >> scv[i];
	cout << dmg(scv[0], scv[1], scv[2]);
	return 0;
}