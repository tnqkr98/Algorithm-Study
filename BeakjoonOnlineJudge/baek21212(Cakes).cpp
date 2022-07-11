#include <iostream>
using namespace std;
int main() {
	int n,min=1e9; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if (b / a <min) min = b / a;
	}
	cout << min;
	return 0;
}