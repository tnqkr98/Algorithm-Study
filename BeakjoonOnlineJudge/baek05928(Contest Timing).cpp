#include <iostream>
using namespace std;
int main() {
	int d, h, m; cin >> d >> h >> m;
	int b = 11 * 1440 + 11 * 60 + 11;
	int a = d * 1440 + h * 60 + m;
	if (b <= a) cout << a - b;
	else cout << -1;

	return 0;
}