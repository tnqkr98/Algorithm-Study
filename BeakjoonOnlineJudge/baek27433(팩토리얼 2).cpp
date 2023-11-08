#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	long long f=1;
	for (int i = 1; i <= n; i++) {
		f *= i;
	}
	if (n == 0) {
		cout << 1;
		return 0;
	}
	cout << f;
	return 0;
}