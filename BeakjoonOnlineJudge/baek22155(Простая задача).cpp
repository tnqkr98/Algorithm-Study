#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if (a <= 2 && b <= 1) cout << "Yes" << endl;
		else if (b <= 2 && a <= 1) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}