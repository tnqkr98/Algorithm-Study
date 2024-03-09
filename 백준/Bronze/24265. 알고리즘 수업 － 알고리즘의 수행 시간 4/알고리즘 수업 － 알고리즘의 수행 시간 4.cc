#include <iostream>
using namespace std;
int main() {
	long long c = 0;
	int n; cin >> n;
	for (int i = 1; i <= n - 1; i++) {
		for (int j = i + 1; j <= n; j++) {
			c++;
		}
	}
	cout << c << endl<<2;
	return 0;
}