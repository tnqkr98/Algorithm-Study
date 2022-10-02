#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	double s; cin >> s;
	double min = 1e9;
	if (n >= 5) {
		double t = s- 500;
		if (t < min) min = t;
	}
	if (n >=10) {
		double t = s*0.9;
		if (t < min) min = t;
	}
	if (n >= 15) {
		double t = s-2000;
		if (t < min) min = t;
	}
	if (n>=20) {
		double t = s*0.75;
		if (t < min) min = t;
	}
	if (min <= 0) cout << 0;
	else cout << min;
	return 0;
}