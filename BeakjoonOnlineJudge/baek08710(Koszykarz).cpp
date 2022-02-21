#include <iostream>
using namespace std;
int main() {
	int k, w, m; cin >> k >> w >> m;
	int res = (w - k) / m;
	if ((w - k) % m != 0) cout << res + 1;
	else cout << res;
	return 0;
}