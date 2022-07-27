#include <iostream>
using namespace std;
int main() {
	int n, m, k,t=0; cin >> n >> m >> k;
	for (int i = 1; i <= m; i++) {
		if (i * 2 <= n && n + m - i * 3 >= k)
			t++;
		else break;
	}
	cout << t;
	return 0;
}