#include <iostream>
using namespace std;
int main() {
	int t, n; cin >> t; n = t;
	int o = 0, e = 0;
	while (t--) {
		int a; cin >> a;
		if (a % 2 == 0) e++;
		else o++;
	}
	if (n % 2 == 1 && e + 1 == o) cout << 1;
	else if (n % 2 == 0 && e == o) cout << 1;
	else cout << 0;

	return 0;
}