#include <iostream>
#include <climits>
#define INF INT_MAX
using namespace std;
long long d[101][101] = { 0 }, n;
void floyd() {
	for (int m = 1; m <= n; m++) 
		for (int s = 1; s <= n; s++) 
			for (int e = 1; e <= n; e++) 
				if (d[s][e] > d[s][m] + d[m][e])
					d[s][e] = d[s][m] + d[m][e];
}

int main() {
	int m; 
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (i != j) d[i][j] = INF;

	for (int i = 0; i < m; i++) {
		int a, b, l;
		cin >> a >> b >> l;
		if(d[a][b] != INF && d[a][b] > l)
			d[a][b] = l;
		else if(d[a][b] == INF)
			d[a][b] = l;
	}

	floyd();

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (d[i][j] == INF)
				cout << 0 << " ";
			else
				cout << d[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}