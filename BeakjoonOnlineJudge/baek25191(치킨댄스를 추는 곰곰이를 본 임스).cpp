#include <iostream>
using namespace std;
int main() {
	int n, a, b; cin >> n >> a >> b;
	int s = 0;
	if (b <= n) {
		n -= b;
		s += b;
	}
	else {
		cout << n;
		return 0;
	}
	if (a / 2 <= n) 
		cout << s + a / 2;
	else cout << s + n;

	return 0;
}