#include <iostream>
using namespace std;
int main() {
	while (1) {
		double a, b; cin >> a >> b;
		if (a == 0 && b == 0) {
			cout << "AXIS" << endl;
			break;
		}
		if (a == 0 || b == 0) cout << "AXIS" << endl;
		if (a > 0 && b > 0) cout << "Q1" << endl;
		if (a > 0 && b < 0) cout << "Q4" << endl;
		if (a < 0 && b > 0) cout << "Q2" << endl;
		if (a < 0 && b < 0) cout << "Q3" << endl;
	}
	return 0;
}