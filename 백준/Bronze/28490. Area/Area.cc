#include <iostream>
using namespace std;
int main() {
	int n,max = 0; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		if (a * b > max) max = a * b;
	}
	cout << max;
	return 0;
}