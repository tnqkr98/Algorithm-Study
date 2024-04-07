#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	if (n >= 2) {
		cout << ((n - 2) % 7 == 0) ? 1 : 0;
	} else {
		if (n == 1) cout << 0;
		else cout << 1;
	}
	return 0;
}