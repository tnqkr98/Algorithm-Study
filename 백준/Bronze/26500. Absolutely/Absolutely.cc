#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		double d1, d2; cin >> d1 >> d2;
		cout << fixed <<setprecision(1) << abs(d1 - d2) << endl;
	}
	return 0;
}