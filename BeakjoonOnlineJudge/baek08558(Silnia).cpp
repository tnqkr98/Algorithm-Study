#include <iostream>
using namespace std;
int main() {
	int n,r=1; cin >> n;
	for (int i = 1; i <= n; i++) {
		r *= i;
		r %= 10;
	}
	cout << r;
	return 0;
}