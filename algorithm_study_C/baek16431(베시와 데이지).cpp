#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	int b1, b2; cin >> b1 >> b2;
	int d1, d2; cin >> d1 >> d2;
	int j1, j2; cin >> j1 >> j2;

	int d = abs(j1 - d1) + abs(j2 - d2);
	int tb1 = abs(b1 - j1);
	int tb2 = abs(b2 - j2);
	int b = min(tb1,tb2) + abs(tb1-tb2);
	if (b > d) cout << "daisy";
	else if (b < d) cout << "bessie";
	else cout << "tie";
	return 0;
}