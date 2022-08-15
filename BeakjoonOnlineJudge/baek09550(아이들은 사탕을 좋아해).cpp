#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int s = 0;
		for (int i = 0; i < n; i++) {
			int a; cin >> a;
			s += a / k;
		}
		cout << s << endl;
	}


	return 0;
}