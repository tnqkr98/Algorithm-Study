#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
vector<int> p;
long long d[101][101], n, m, path[101][101];
void floyd() {
	for (int k = 1; k <= n; k++)
		for (int s = 1; s <= n; s++)
			for (int e = 1; e <= n; e++)
				if (d[s][k] + d[k][e] < d[s][e]) {
					d[s][e] = d[s][k] + d[k][e];
					path[s][e] = k;
				}
}
void printPath(int s, int e) {
	if (path[s][e] != -1) {
		printPath(s, path[s][e]);
		p.push_back(path[s][e]);
		printPath(path[s][e], e);
	}
}
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++) {
			if (i != j) d[i][j] = LONG_MAX;
			path[i][j] = -1;
		}
	for (int i = 0; i < m; i++) {
		int s, e, w; cin >> s >> e >> w;
		if(d[s][e]== LONG_MAX) d[s][e] = w;
		else if(w < d[s][e]) d[s][e] = w;
	}
	floyd();
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if(d[i][j] == LONG_MAX) cout << 0 << " ";
			else cout << d[i][j] << " ";
		}
		cout << endl;
	}
	p = vector<int>();
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (i != j && d[i][j]!= LONG_MAX) {
				p.clear();
				printPath(i, j);
				cout <<p.size()+2<<" "<< i << " ";
				for (int k = 0; k < p.size(); k++)
					cout << p[k] << " ";
				cout<<j << endl;
			}
			else cout << "0" << endl;
		

	return 0;
}