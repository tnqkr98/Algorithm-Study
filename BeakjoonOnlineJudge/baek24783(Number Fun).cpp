#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	while (n--) {
		double a, b, c; cin >> a >> b >> c;
		if (a + b == c || a - b == c || a * b == c || b - a == c || b / a == c || a / b == c) {
			cout << "Possible" << endl;
		}
		else cout << "Impossible" << endl;
	}
	return 0;
}