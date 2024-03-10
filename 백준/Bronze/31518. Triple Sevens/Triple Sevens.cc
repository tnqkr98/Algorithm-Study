#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int c[3] = {0};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < n; j++) {
			int k; cin >> k;
			if (k == 7) c[i] = 1;
		}
	}
	if (c[1] + c[2] + c[0] == 3) cout << 777;
	else cout << 0;
	return 0;
}