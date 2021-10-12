#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <memory.h>
using namespace std;
int a[10][10], cur[10][10],n,summer[10][10];
map<int, vector<int>> tree;
void step1() {
	for(int i=0;i<n;i++)
		for (int j = 0; j < n; j++) {
			vector<int> v = tree[i*n + j],r;
			sort(v.begin(), v.end());
			for (int tr = 0; tr < v.size(); tr++) {
				if (cur[i][j] - v[tr] >= 0) {
					cur[i][j] -= v[tr];
					r.push_back(v[tr] + 1);
				}
				else 
					summer[i][j] += v[tr] / 2;
			}
			tree[i*n + j] = r;
		}
}
void step2() {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cur[i][j] += summer[i][j];
	memset(summer, 0, sizeof(summer));
}
void step3() {
	int d[8][2] = { {-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1} };
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			for (int t = 0; t < 8; t++) {
				int nr, nc;
				nr = i + d[t][0];
				nc = j + d[t][1];
				if (nr >= 0 && nc >= 0 && nr < n&&nc < n) 
					for (auto tr : tree[i*n + j]) 
						if (tr % 5 == 0)
							tree[nr*n + nc].push_back(1);
			}

}
void step4() {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cur[i][j] += a[i][j];
}
int main() {
	int m,k; cin >> n>>m>>k;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			cur[i][j] = 5;
		}
	for (int i = 0; i < m; i++) {
		int r, c, age;cin >> r >> c >> age;
		tree[(r-1)*n+(c-1)].push_back(age);
	}
	while (k--) {
		step1();
		step2();
		step3();
		step4();
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			sum += tree[i*n +j].size();
	cout << sum;
	return 0;
}