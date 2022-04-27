#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;
struct rc { int r, c; };
int mp[16][16], df[9][2] = { {0,0},{0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1} }, n;
bool tre[16][16]; // 영양제가 있던 자리
vector<rc> v, utree; // v:영양제 위치 벡터, utree:성장할 나무 위치
bool range(int r, int c) {
	return r >= 0 && c >= 0 && r < n && c < n;
}
void move(int d, int p) {
	for (auto a : v) {
		int nr = a.r, nc = a.c;
		for (int i = 0; i < p%n; i++) {
			nr += df[d][0];
			nc += df[d][1];
			if (nr == n) nr = 0;
			if (nr == -1) nr = n - 1;
			if (nc == n) nc = 0;
			if (nc == -1) nc = n - 1;
		}
		tre[nr][nc] = 1;
		mp[nr][nc]++;
		utree.push_back({ nr,nc });
	}
	v.clear();
}
void grow() {
	int gr[16][16] = { 0 };
	for (auto t : utree)
		for (int i = 2; i <= 8; i += 2) {
			int nr, nc;
			nr = t.r + df[i][0];
			nc = t.c + df[i][1];
			if (range(nr, nc) && mp[nr][nc]>0)
				gr[t.r][t.c]++;
		}
	utree.clear();
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			mp[i][j] += gr[i][j];
			if (mp[i][j] >= 2 && !tre[i][j]) {
				mp[i][j] -= 2;
				v.push_back({ i,j });// 새영양제 자리
			}
		}
	memset(tre, 0, sizeof(tre));
}
int main() {
	int m; cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			int t; cin >> t;
			mp[i][j] = t;
		}
	v.push_back({ n - 1,0 });
	v.push_back({ n - 1,1 });
	v.push_back({ n - 2,0 });
	v.push_back({ n - 2,1 });
	while (m--) {
		int d, p; cin >> d >> p;
		move(d, p);
		grow();
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			sum += mp[i][j];
	cout << sum;
	return 0;
}