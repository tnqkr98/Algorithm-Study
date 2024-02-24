#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int min = 9999;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if (a + b < min) min = a + b;
	}
	cout << min;
	return 0;
}