#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int ap, ba;
	ap = a * 3 + b * 2 + c;
	ba = d * 3 + e * 2 + f;
	if (ap > ba) cout << "A";
	else if (ap < ba) cout << "B";
	else cout << "T";


	return 0;
}