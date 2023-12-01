#include <iostream>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	if (a - 1 <= b) {
		cout << a + a - 1;
	}
	else if (b + 1 <= a) {
		cout << b + 1 + b;
	}
	return 0;
}