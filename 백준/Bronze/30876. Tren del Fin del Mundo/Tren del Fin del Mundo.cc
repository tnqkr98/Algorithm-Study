#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int mx, my = 1001;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		if (y < my) {
			mx = x;
			my = y;
		}
	}
	cout << mx << " " << my;
	return 0;
}