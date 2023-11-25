#include <iostream>
using namespace std;
int main() {
	int n, x, min = 3000; cin >> n >> x;
	int p = 0; cin >> p;
	for (int i = 0; i < n-1; i++) {
		int a; cin >> a;
		int nmin = a + p;
		if (nmin < min) min = nmin;
		p = a;
	}
	cout << min * x;
	return 0;
}