#include <iostream>
using namespace std;
int main() {
	double k; cin >> k;
	k = k / 100 + 25;
	if (k < 100) cout << 100;
	else if (k > 2000) cout << 2000;
	else cout << k;
	return 0;
}