#include <iostream>
using namespace std;
int main() {
	int n, a, b, c, d;
	cin >> n >> a >> b >> c >> d;
	int as = (n / a)*b;
	if (n%a != 0) as += b;
	int cs = (n / c)*d;
	if (n%c != 0) cs += d;
	if (as > cs) cout << cs;
	else cout << as;
	return 0;
}