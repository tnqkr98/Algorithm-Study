#include <iostream>
using namespace std;
int main() {
	int n,sum=0; cin >> n;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		sum += a;
		if (i < n - 1) sum += 8;
	}
	cout << sum / 24 << " " << sum % 24;
	return 0;
}