#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
	int s = a + b + c + d;
	int t = e * 4;
	if (s >= t) cout << 0;
	else cout << t - s;
	return 0;
}