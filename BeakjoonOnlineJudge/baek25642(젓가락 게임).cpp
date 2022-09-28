#include <iostream>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	bool t = 1;
	while (a < 5 && b < 5) {
		if (t) {
			b += a;
			t = !t;
		}
		else {
			a += b;
			t = !t;
		}
	}
	if (a > b) cout << "yj";
	else cout << "yt";
	return 0;
}