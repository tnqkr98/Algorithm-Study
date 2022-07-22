#include <iostream>
using namespace std;
int main() {
	int n, min = 1e9; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (b >= a && b<min) 
			min = b;
	}
	if (min == 1e9) cout << -1;
	else cout << min;
	return 0;
}