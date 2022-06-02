#include <iostream>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	if (a > b) {
		int t = b;
		b = a;
		a = t;
	}
	long long sum = (b*(b+1)/2)-(a * (a + 1)) / 2 +a;

	cout << sum;

	return 0;
}