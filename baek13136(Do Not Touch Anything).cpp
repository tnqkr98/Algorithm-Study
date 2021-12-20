#include <iostream>
using namespace std;
int main() {
	long long r, c, n; cin >> r >> c >> n;
	if (r%n != 0) r = r / n + 1;
	else r = r / n;
	if (c%n != 0) c = c / n + 1;
	else c = c / n;
	cout << r * c;
	return 0;
}