#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	while (n--) {
		int a, b; cin >> a >> b;
		int s = 0;
		if (a != 0) {
			if (a == 1) s += 5000000;
			else if (a <= 3) s += 3000000;
			else if (a <= 6) s += 2000000;
			else if (a <= 10) s += 500000;
			else if (a <= 15) s += 300000;
			else if (a <= 21) s += 100000;
		}
		if (b != 0) {
			if (b == 1) s += 5120000;
			else if (b <= 3) s += 2560000;
			else if (b <= 7) s += 1280000;
			else if (b <= 15) s += 640000;
			else if (b <= 31) s += 320000;
		}
		cout << s << endl;
	}
	return 0;
}