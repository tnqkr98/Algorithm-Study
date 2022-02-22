#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int sa = 100, sb = 100;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if (a > b) sb -= a;
		else if (a < b) sa -= b;
	}
	cout << sa << endl << sb;
	return 0;
}