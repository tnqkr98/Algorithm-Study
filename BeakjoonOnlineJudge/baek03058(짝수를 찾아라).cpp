#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	while (n--) {
		int s=0,m=1e9;
		for (int i = 0; i < 7; i++) {
			int t; cin >> t;
			if (t % 2 == 0) {
				s += t;
				if (t < m) m = t;
			}
		}
		cout << s << " " << m << endl;
	}


	return 0;
}