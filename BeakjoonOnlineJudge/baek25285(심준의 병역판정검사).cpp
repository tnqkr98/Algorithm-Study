#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		double a, b; cin >> a >> b;
		b = b / ((a / 100) * (a / 100));
		if (a < 140.1) cout << 6 << endl;
		else if (a < 146) cout << 5 << endl;
		else if (a < 159) cout << 4 << endl;
		else if (a < 161) {
			if (b >= 16 && b < 35)
				cout << 3 << endl;
			else
				cout << 4 << endl;
		}
		else if (a < 204) {
			if (b >= 20 && b < 25)
				cout << 1 << endl;
			else if ((b >= 18.5 && b < 20) || (b >= 25 && b < 30))
				cout << 2 << endl;
			else if ((b >= 16 && b < 18.5) || (b >= 30 && b < 35))
				cout << 3 << endl;
			else if (b >= 35 || b < 16)
				cout << 4 << endl;
		}
		else cout << 4 << endl;
	}
	return 0;
}