#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int y=0, k=0;
		for (int i = 0; i < 9; i++) {
			int a, b; cin >> a >> b;
			y += a;
			k += b;
		}
		if (y > k)cout << "Yonsei";
		else if (k < y) cout << "Korea";
		else cout << "Draw";
		cout << endl;
	}
	return 0;
}