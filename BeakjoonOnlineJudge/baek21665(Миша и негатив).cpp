#include <iostream>
using namespace std;
int main() {
	char a[101][101], b;
	int c = 0;
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> b;
			if (a[i][j] == b)c++;
		}

	cout << c;
	return 0;
}