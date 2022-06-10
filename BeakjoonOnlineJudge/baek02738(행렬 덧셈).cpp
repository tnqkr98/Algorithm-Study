#include <iostream>
using namespace std;
int main() {
	int n, m; cin >> n >> m;
	int a[101][101];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int t; cin >> t;
			cout << a[i][j] + t << " ";
		}
		cout << endl;
	}

	return 0;
}