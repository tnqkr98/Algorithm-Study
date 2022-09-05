#include <iostream>
using namespace std;
int main() {
	while (1) {
		int a, b, c, d; cin >> a >> b >> c >> d;
		if (a + b + c + d == 0) break;
		if (a == 0) cout << d / c / b << " " << b << " " << c << " " << d << endl;
		if (b == 0) cout << a << " " << d / c / a << " " << c << " " << d << endl;
		if (c == 0) cout << a << " " << b << " " << d / a / b << " " << d << endl;
		if (d == 0) cout << a << " " << b << " " << c << " " << a*b*c << endl;
	}

	return 0;
}