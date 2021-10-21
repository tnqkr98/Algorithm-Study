#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
struct info {int frn, bin, r, c;};
bool cmp(info a, info b) {
	if (a.frn > b.frn) return 1;
	else if (a.frn == b.frn) 
		if (a.bin > b.bin) return 1;
		else if (a.bin == b.bin) {
			if (a.r < b.r) return 1;
			else if (a.r == b.r) {
				if (a.c < b.c) return 1;
			}
		}
	return 0;
};
map<int, vector<bool>>m;
int arr[21][21],n,d[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
void makePos(int cur) {
	vector<info> curvec;
	for(int i=n-1;i>=0;i--)
		for (int j = n - 1; j >= 0; j--) {
			int bin=0,frn=0;
			if (arr[i][j] == 0) {
				for (int k = 0; k < 4; k++) {
					int nr, nc;
					nr = i + d[k][0];
					nc = j + d[k][1];
					if (nr >= 0 && nc >= 0 && nr < n&&nc < n) {
						if (!arr[nr][nc]) bin++;
						if (m[cur][arr[nr][nc]]) frn++;
					}
				}
				curvec.push_back({ frn,bin,i,j });
			}
		}
	sort(curvec.begin(), curvec.end(), cmp);
	arr[curvec[0].r][curvec[0].c] = cur;
}
int main() {
	cin >> n;
	vector<int> v;
	int sum = 0;
	for (int i = 1; i <= n*n; i++) {
		int num; cin >> num;
		v.push_back(num);
		m[num] = vector<bool>(n*n+1,0);
		for (int j = 0; j < 4; j++) {
			int f; cin >> f;
			m[num][f] = 1;
		}
	}
	for (int i = 0; i < v.size(); i++) makePos(v[i]);
	for(int i=0;i<n;i++)
		for (int j = 0; j < n; j++) {
			int cur = arr[i][j],cnt=0;
			for (int k = 0; k < 4; k++) {
				int nr, nc;
				nr = i + d[k][0];
				nc = j + d[k][1];
				if (nr >= 0 && nc >= 0 && nr < n&&nc < n&&m[cur][arr[nr][nc]])
					cnt++;
			}
			if(cnt ==1) sum += 1;
			else if (cnt == 2) sum += 10;
			else if (cnt == 3) sum += 100;
			else if (cnt == 4) sum += 1000;
		}
	cout << sum;
	return 0;
}