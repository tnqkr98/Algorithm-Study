#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int w, k; cin >> w >> k;
		cout << w * k / 2 << endl;
	}
	return 0;
}