#include <iostream>
using namespace std;
int main() {
	int n, t,s=0; cin >> n >> t;
	int i;
	for (i = 1; i <= n; i++) {
		int a; cin >> a;
		s += a;
		if (s > t) {
			cout << i-1;
			break;
		}
	}
	if (i >n && s <= t) cout << n;

	return 0;
}