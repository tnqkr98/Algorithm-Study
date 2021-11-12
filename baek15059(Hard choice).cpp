#include <iostream>
using namespace std;
int main() {
	int a, b, c; cin >> a >> b >> c;
	int d, e, g; cin >> d >> e >> g;
	int sum = 0;
	if (a < d) sum += d - a;
	if (b < e)sum += e - b;
	if (c < g)sum += g - c;
	cout << sum;
	return 0;
}