#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, s, m, t, max = -1, d[100][1001] = { 0 };
	cin >> n >> s >> m;	
	cin >> t;
	if (s - t >= 0) d[0][s - t] = 1;
	if (s + t <= m) d[0][s + t] = 1;
	for (int i = 1; i < n; i++) {
		cin >> t;
		for (int j = 0; j <= m; j++) {
			if (d[i - 1][j] == 1) {
				if (j - t >= 0) d[i][j - t] = 1;
				if (j + t <= m) d[i][j + t] = 1;
			}
		}
	}
	for (int i = 0; i <= m; i++) {
		if (d[n - 1][i] == 1) {
			if (max == -1) max = i;
			else if (max < i) max = i;
		}
	}
	cout << max;
	return 0;
}