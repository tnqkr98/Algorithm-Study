#include <iostream>
using namespace std;
int main() {
	int n,max=0; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, d, g; cin >> a >> d >> g;
		int s = a*(d+g);
		if (a == d + g) s *= 2;
		if (max < s) max = s;
	}
	cout << max;
	return 0;
}