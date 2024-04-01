#include <iostream>
using namespace std;
int main() {
	int p = 2;
	long long s = 1;
	long long sum = 1;
	int n; cin >> n;
	if (n <= 2) {
		cout << 0 << endl << 3;
		return 0;
	}
	else if (n == 3) {
		cout << 1 << endl << 3;
		return 0;
	}
	for (int i = 0; i < n - 3; i++) {
		s += p;
		sum += s;
		p += 1;
	}
	cout << sum <<endl <<3;
	return 0;
}