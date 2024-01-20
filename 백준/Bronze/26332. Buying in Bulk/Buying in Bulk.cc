#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		cout << a << " " << b << endl;
		cout << b + (b - 2) * (a - 1) << endl;
	}
	return 0;
}