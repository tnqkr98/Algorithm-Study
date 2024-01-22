#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		double a, b; cin >> a >> b;
		cout << "The height of the triangle is ";
		cout << fixed << setprecision(2) << (2 * a) / b;
		cout << " units" << endl;
	}
	return 0;
}