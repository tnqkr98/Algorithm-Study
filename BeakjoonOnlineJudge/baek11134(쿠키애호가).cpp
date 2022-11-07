#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, c; cin >> n >> c;
		cout << n / c + ((n % c > 0) ? 1 : 0)<<endl;
	}
	return 0;
}