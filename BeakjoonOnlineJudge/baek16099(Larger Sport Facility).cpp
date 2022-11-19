#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		long long a, b, c, d; cin >> a >> b >> c >> d;
		if (a * b > c * d) cout << "TelecomParisTech" << endl;
		else if (a * b < c * d) cout << "Eurecom" << endl;
		else cout << "Tie" << endl;
	}
	return 0;
}