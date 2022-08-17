#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b, c, d; cin >> a >> b >> c >> d;
		int q, w, e, r; cin >> q >> w >> e >> r;
		a += q;
		b += w;
		c += e;
		d += r;
		if (a < 1) a = 1;
		if (b < 1)b = 1;
		if (c < 0) c = 0;
		cout << a + b * 5 + c * 2 + d * 2 << endl;
	}
	return 0;
}