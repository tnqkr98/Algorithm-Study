#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x, l, r;
	cin >> x >> l >> r;
	if (x >= l && x <= r) cout << x;
	else {
		int al = abs(x - l);
		int br = abs(x - r);
		if (al > br) cout << r;
		else cout << l;
	}


	return 0;
}