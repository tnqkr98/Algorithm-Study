#include <iostream>
using namespace std;
int main() {
	int a, b, res = 0; cin >> a >> b;
	if (a > 60) {
		res += 60 * 1500;
		a -= 60;
		if (a > b) {
			res += b * 1500;
			res += (a - b) * 3000;
		}
		else res += a * 1500;
	}
	else res += a * 1500;

	cout << res;
	return 0;
}