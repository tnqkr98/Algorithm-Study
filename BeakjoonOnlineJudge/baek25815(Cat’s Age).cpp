#include <iostream>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	if (a < 1) cout << (15 * b) / 12 << " " << (15 * b) % 12;
	else if (a < 2) cout << 15 + (9 * b) / 12 << " " << (9 * b) % 12;
	else cout << 24 + ((a - 2) * 4) + (4 * b) / 12 << " " << (4 * b) % 12;
	return 0;
}