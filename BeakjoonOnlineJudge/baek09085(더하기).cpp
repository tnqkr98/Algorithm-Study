#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, s = 0; cin >> n;
		for (int i = 0; i < n; i++) {
			int a; cin >> a;
			s += a;
		}
		cout << s << endl;
	}

	return 0;
}