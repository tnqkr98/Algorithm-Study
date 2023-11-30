#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	long long p = 1;
	for (int i = 1; i <= n; i++) {
		p *= i;
	}
	cout << p / (3628800 / 6);
	return 0;
}