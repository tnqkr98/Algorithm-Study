#include <iostream>
#include <vector>
#include <climits>
#define INF INT_MAX
using namespace std;
long long d[101][101],n;
void floyd() {
	for (int m = 1; m <= n; m++) 
 		for(int s=1;s<=n;s++)
			for (int e = 1; e <= n; e++) 
				if (d[s][e] > d[s][m] + d[m][e])
					d[s][e] = d[s][m] + d[m][e];
}
int main() {
	int m; cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			d[i][j] = INF;
			if (i == j) d[i][j] = 0;
		}
	for (int i = 0; i < m; i++) {
		int s, e; cin >> s >> e;
		d[s][e] = 1;
	}
	floyd();
	

	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		for (int j = 1; j <= n; j++)
			if (d[i][j] == INF && d[j][i] == INF) cnt++;
		cout << cnt << endl;
	}
	return 0;
}