#include <iostream>
using namespace std;
int main() {
	int n, m; cin >> n >> m;
	int sum = n;
	while (n / m > 0) {
		sum += n / m;
		n /= m;
	}
	cout << sum;
	return 0;
}