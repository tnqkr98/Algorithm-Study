#include <iostream>
using namespace std;
int main() {
	int n, m,c=0; cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		int cnt = 0;
		for (int j = 0; j < m; j++) {
			if (s[j] == 'O') cnt++;
		}
		if (cnt > m / 2) c++;
	}
	cout << c;
	return 0;
}