#include <iostream>
using namespace std;
int main() {
	int n, m; cin >> n >> m;
	if (n < m) cout << n / 2;
	else cout << m / 2;

	return 0;
}