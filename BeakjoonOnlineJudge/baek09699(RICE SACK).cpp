#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	for (int j = 1; j <= t;j++) {
		int m = 0;
		for (int i = 0; i < 5; i++) {
			int a; cin >> a;
			if (m < a) m = a;
		}
		cout << "Case #" << j << ": " << m << endl;
	}
	return 0;
}