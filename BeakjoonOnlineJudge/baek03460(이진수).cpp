#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int i = 0; n != 0; i++) {
			if(n%2 == 1)cout << i<<" ";
			n /= 2;
		}
		cout << endl;
	}
	return 0;
}