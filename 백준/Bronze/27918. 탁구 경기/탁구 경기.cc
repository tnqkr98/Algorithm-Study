#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n; cin >> n;
	int d = 0, p = 0;
	for (int i = 0; i < n; i++) {
		char c; cin >> c;
		if (c == 'D') d++;
		if (c == 'P') p++;
		if (abs(d - p) == 2) {
			break;
		}
	}
	cout << d << ":" << p;
	return 0;
}