#include <iostream>
using namespace std;
int main() {
	int l, p, v, i = 1;
	while (1) {
		cin >> l >> p >> v;
		if (l == 0 && p == 0 && v == 0) break;
		int res = (v / p)*l;
		if (v%p <= l) res += v % p;
		else res += l;
		cout << "Case " << i++ << ": " << res << endl;
	}
	return 0;
}