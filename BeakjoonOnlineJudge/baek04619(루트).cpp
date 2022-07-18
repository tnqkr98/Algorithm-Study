#include <iostream>
#include <cmath>
using namespace std;
int main() {
	while (1) {
		int b, n; cin >> b >> n;
		if (b == 0 && n == 0) break;
		int min = 1e9,num=0;
		for (int i = 1;; i++) {
			int p = pow(i, n);
			if (abs(b - p) < min) {
				min = abs(b - p);
				num = i;
			}
			if (p > 2000000) break;
		}
		cout << num<<endl;
	}
	return 0;
}
