#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int min=1e9,ma=0,mb=0;
	for (int i = 1; i <= n; i++) {
		int a = n / i + ((n % i != 0) ? 1 : 0);
		if (a + i < min) {
			min = a + i;
			ma = a;
			mb = i;
		}
	}
	cout << ma<<" "<<mb;
	return 0;
}