#include <iostream>
using namespace std;
int main() {
	int n,s=0; cin >> n;
	for (int i = 0; i < n; i++) {
		int t; cin >> t;
		s += t;
	}
	if (s <= n / 2) cout << "Junhee is not cute!";
	else cout << "Junhee is cute!";
	return 0;
}