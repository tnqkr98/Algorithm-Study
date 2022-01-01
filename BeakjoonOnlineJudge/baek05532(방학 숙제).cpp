#include <iostream>
using namespace std;
int main() {
	int l, a, b, c, d,cnt=0;
	cin >> l >> a >> b >> c >> d;
	while (a > 0 || b > 0) {
		a -= c; b -= d;
		cnt++;
	}
	cout << l - cnt;
	return 0;
}