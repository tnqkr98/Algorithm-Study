#include <iostream>
using namespace std;
int main() {
	while (1) {
		int n; cin >> n;
		if (n == 0) break;
		int sum = n;
		for (int i = n - 1; i >= 1; i--) {
			sum += i;
		}
		cout << sum << endl;
	}
	return 0;
}