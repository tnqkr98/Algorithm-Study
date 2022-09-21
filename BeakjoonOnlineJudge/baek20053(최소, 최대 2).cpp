#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n,min=1e9,max=-1e9; cin >> n;
		for (int i = 0; i < n; i++) {
			int a; cin >> a;
			if (a > max) max = a;
			if (a < min) min = a;
		}
		cout << min << " " << max << endl;
	}
	return 0;
}