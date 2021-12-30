#include <iostream>
#include <algorithm>
using namespace std;
int d[1000][1000],arr[1000][1000], in[3][2] = { {1,0},{0,1},{1,1} };
int main() {
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	d[0][0] = arr[0][0];
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++) 
			for (int k = 0; k < 3; k++) {
				int nr, nc;
				nr = i + in[k][0];
				nc = j + in[k][1];
				if (nr < n && nc < m) 
					d[nr][nc] = max(d[nr][nc], d[i][j] + arr[nr][nc]);
			}
	cout << d[n - 1][m - 1];
	return 0;
}