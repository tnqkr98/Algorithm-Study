#include <iostream>
using namespace std;
int main() {
	int a, b, c; cin >> a >> b >> c;
	int big = a > b ? a : b;
	int small = a > b ? b : a;
	if (big / small <= 2 && small / c >= 2) cout << "good";
	else cout << "bad";
	return 0;
}