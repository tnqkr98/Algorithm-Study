#include <iostream>
using namespace std;
int d[401][401],v;
void floyd() {
	for(int s=1;s<=v;s++)
		for(int m=1;m<=v;m++)
			for (int e = 1; e <= v; e++) {
				if (d[s][m] + d[m][e] < d[s][e]) {
					d[s][e] = d[s][m] + d[m][e];
				}
			}
}
int main() {
	int e; cin >> v >> e;
	for (int i = 1; i <= v; i++)
		for (int j = 1; j <= v; j++)
			d[i][j] = 1e9;
	
	for (int i = 0; i < e; i++) {
		int a, b, s; cin >> a >> b >> s;
		d[a][b] = s;
	}
	floyd();
	int min = 1e9;
	for (int i = 1; i <= v; i++) 
		if (d[i][i] < min)
			min = d[i][i];
	if (min == 1e9) cout << -1;
	else cout << min;

	return 0;
}