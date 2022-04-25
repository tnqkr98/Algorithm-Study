#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int c,n; cin >> c>>n;
		for(int i=0;i<n;i++){
			int p, q; cin >> p >> q;
			c += p * q;
		}
		cout << c << endl;
	}
	return 0;
}