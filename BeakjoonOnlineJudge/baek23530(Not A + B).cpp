#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		for (int j = 1; j <= 50; j++) {
			if (j != a + b) {
				cout << j << endl;
				break;
			}
		}
	}
	return 0;
}