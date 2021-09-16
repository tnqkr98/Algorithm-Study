#include <iostream>
#include <climits>
#include <memory.h>
using namespace std;
long long d[501][501],n;
void floyd() {
	for(int k=1;k<=n;k++)
		for(int s=1;s<=n;s++)
			for (int e = 1; e <= n; e++) 
				if (d[s][e] > d[s][k] + d[k][e])
					d[s][e] = d[s][k] + d[k][e];
}
int main() {
	int m; cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			d[i][j] = INT_MAX;
	for (int i = 0; i < m; i++) {
		int s, e; cin >> s >> e;
		d[s][e] = 1;
	}
	floyd();
	int gcnt = 0;
	for (int i = 1; i <= n; i++) {
		int cnt = 0;
		for (int j = 1; j <= n; j++) {
			if (d[i][j] != INT_MAX)
				cnt++;
			if (d[j][i] != INT_MAX)
				cnt++;
		}
		if (cnt == n - 1)
			gcnt++;
	}
	cout << gcnt;
	return 0;
}